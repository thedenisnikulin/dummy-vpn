use libc::{c_int, dlsym, sockaddr, sockaddr_in, socklen_t, RTLD_NEXT};
use socks::Socks5Stream;
use std::os::unix::prelude::IntoRawFd;
use std::{ffi::CString};
use std::net::{IpAddr, Ipv4Addr, SocketAddr, SocketAddrV4};


type OriginalConnect =
    unsafe extern "C" fn(socket: c_int, address: *const sockaddr, address_len: socklen_t) -> c_int;

#[repr(C)]
struct Original {
    connect: OriginalConnect,
}

unsafe fn init_lib() -> Original {
    let connect_sym = CString::new("connect").unwrap();
    let connect_ptr = dlsym(RTLD_NEXT, connect_sym.as_ptr());
    let connect_ptr: OriginalConnect = std::mem::transmute(connect_ptr);
    Original {
        connect: connect_ptr,
    }
}

#[no_mangle]
pub unsafe extern "C" fn connect(
    socket: c_int,
    address: *const sockaddr,
    address_len: socklen_t,
) -> c_int {
    let original = init_lib();

    let hello = CString::new("Lol, it's Rust.\n").unwrap();
    libc::printf(hello.as_ptr());

    let target = from_sockaddr(address);
    let socks5_stream =
        Socks5Stream::connect("139.99.75.11:8080", (*target.ip(), target.port())).unwrap();
    // ^ test proxy addr
    socks5_stream.into_inner().into_raw_fd() as c_int
    // (original.connect)(socket, address, address_len)
}

unsafe fn from_sockaddr(addr: *const sockaddr) -> SocketAddrV4 {
    // TODO directly cast s_addr to Ipv4Addr?
    let addr_in: sockaddr_in = std::mem::transmute(*addr);
    let ipv4_addr = Ipv4Addr::from(addr_in.sin_addr.s_addr);
    let port = addr_in.sin_port;
    SocketAddrV4::new(ipv4_addr, port)
}

#[cfg(test)]
mod tests {
    #[test]
    fn it_works() {
        assert_eq!(2 + 2, 4);
    }
}
