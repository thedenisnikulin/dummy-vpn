use libc::{c_int, dlsym, sockaddr, socklen_t, RTLD_NEXT};
use std::{ffi::{CString}, net::SocketAddr};
use socks;

// 139.99.75.11:8080

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
pub unsafe extern "C" fn connect(socket: c_int, address: *const sockaddr, address_len: socklen_t) -> c_int {
    let original = init_lib();
    let hello = CString::new("Lol, it's Rust.\n").unwrap();
    libc::printf(hello.as_ptr());
//    let socks5_stream = socks::Socks5Stream::connect(SocketAddr::from([139, 99, 75, 11], 8080), SocketAddr::)
    (original.connect)(socket, address, address_len)
}

#[cfg(test)]
mod tests {
    #[test]
    fn it_works() {
        assert_eq!(2 + 2, 4);
    }
}
