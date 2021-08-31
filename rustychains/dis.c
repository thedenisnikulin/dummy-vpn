
/usr/local/bin/libvpn.so:     file format elf64-x86-64


Disassembly of section .init:

0000000000001000 <_init>:
    1000:	f3 0f 1e fa          	endbr64 
    1004:	48 83 ec 08          	sub    rsp,0x8
    1008:	48 8b 05 c1 2f 00 00 	mov    rax,QWORD PTR [rip+0x2fc1]        # 3fd0 <__gmon_start__>
    100f:	48 85 c0             	test   rax,rax
    1012:	74 02                	je     1016 <_init+0x16>
    1014:	ff d0                	call   rax
    1016:	48 83 c4 08          	add    rsp,0x8
    101a:	c3                   	ret    

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020:	ff 35 e2 2f 00 00    	push   QWORD PTR [rip+0x2fe2]        # 4008 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	f2 ff 25 e3 2f 00 00 	bnd jmp QWORD PTR [rip+0x2fe3]        # 4010 <_GLOBAL_OFFSET_TABLE_+0x10>
    102d:	0f 1f 00             	nop    DWORD PTR [rax]
    1030:	f3 0f 1e fa          	endbr64 
    1034:	68 00 00 00 00       	push   0x0
    1039:	f2 e9 e1 ff ff ff    	bnd jmp 1020 <.plt>
    103f:	90                   	nop
    1040:	f3 0f 1e fa          	endbr64 
    1044:	68 01 00 00 00       	push   0x1
    1049:	f2 e9 d1 ff ff ff    	bnd jmp 1020 <.plt>
    104f:	90                   	nop
    1050:	f3 0f 1e fa          	endbr64 
    1054:	68 02 00 00 00       	push   0x2
    1059:	f2 e9 c1 ff ff ff    	bnd jmp 1020 <.plt>
    105f:	90                   	nop
    1060:	f3 0f 1e fa          	endbr64 
    1064:	68 03 00 00 00       	push   0x3
    1069:	f2 e9 b1 ff ff ff    	bnd jmp 1020 <.plt>
    106f:	90                   	nop
    1070:	f3 0f 1e fa          	endbr64 
    1074:	68 04 00 00 00       	push   0x4
    1079:	f2 e9 a1 ff ff ff    	bnd jmp 1020 <.plt>
    107f:	90                   	nop
    1080:	f3 0f 1e fa          	endbr64 
    1084:	68 05 00 00 00       	push   0x5
    1089:	f2 e9 91 ff ff ff    	bnd jmp 1020 <.plt>
    108f:	90                   	nop
    1090:	f3 0f 1e fa          	endbr64 
    1094:	68 06 00 00 00       	push   0x6
    1099:	f2 e9 81 ff ff ff    	bnd jmp 1020 <.plt>
    109f:	90                   	nop
    10a0:	f3 0f 1e fa          	endbr64 
    10a4:	68 07 00 00 00       	push   0x7
    10a9:	f2 e9 71 ff ff ff    	bnd jmp 1020 <.plt>
    10af:	90                   	nop
    10b0:	f3 0f 1e fa          	endbr64 
    10b4:	68 08 00 00 00       	push   0x8
    10b9:	f2 e9 61 ff ff ff    	bnd jmp 1020 <.plt>
    10bf:	90                   	nop
    10c0:	f3 0f 1e fa          	endbr64 
    10c4:	68 09 00 00 00       	push   0x9
    10c9:	f2 e9 51 ff ff ff    	bnd jmp 1020 <.plt>
    10cf:	90                   	nop
    10d0:	f3 0f 1e fa          	endbr64 
    10d4:	68 0a 00 00 00       	push   0xa
    10d9:	f2 e9 41 ff ff ff    	bnd jmp 1020 <.plt>
    10df:	90                   	nop
    10e0:	f3 0f 1e fa          	endbr64 
    10e4:	68 0b 00 00 00       	push   0xb
    10e9:	f2 e9 31 ff ff ff    	bnd jmp 1020 <.plt>
    10ef:	90                   	nop
    10f0:	f3 0f 1e fa          	endbr64 
    10f4:	68 0c 00 00 00       	push   0xc
    10f9:	f2 e9 21 ff ff ff    	bnd jmp 1020 <.plt>
    10ff:	90                   	nop
    1100:	f3 0f 1e fa          	endbr64 
    1104:	68 0d 00 00 00       	push   0xd
    1109:	f2 e9 11 ff ff ff    	bnd jmp 1020 <.plt>
    110f:	90                   	nop
    1110:	f3 0f 1e fa          	endbr64 
    1114:	68 0e 00 00 00       	push   0xe
    1119:	f2 e9 01 ff ff ff    	bnd jmp 1020 <.plt>
    111f:	90                   	nop
    1120:	f3 0f 1e fa          	endbr64 
    1124:	68 0f 00 00 00       	push   0xf
    1129:	f2 e9 f1 fe ff ff    	bnd jmp 1020 <.plt>
    112f:	90                   	nop
    1130:	f3 0f 1e fa          	endbr64 
    1134:	68 10 00 00 00       	push   0x10
    1139:	f2 e9 e1 fe ff ff    	bnd jmp 1020 <.plt>
    113f:	90                   	nop
    1140:	f3 0f 1e fa          	endbr64 
    1144:	68 11 00 00 00       	push   0x11
    1149:	f2 e9 d1 fe ff ff    	bnd jmp 1020 <.plt>
    114f:	90                   	nop
    1150:	f3 0f 1e fa          	endbr64 
    1154:	68 12 00 00 00       	push   0x12
    1159:	f2 e9 c1 fe ff ff    	bnd jmp 1020 <.plt>
    115f:	90                   	nop
    1160:	f3 0f 1e fa          	endbr64 
    1164:	68 13 00 00 00       	push   0x13
    1169:	f2 e9 b1 fe ff ff    	bnd jmp 1020 <.plt>
    116f:	90                   	nop
    1170:	f3 0f 1e fa          	endbr64 
    1174:	68 14 00 00 00       	push   0x14
    1179:	f2 e9 a1 fe ff ff    	bnd jmp 1020 <.plt>
    117f:	90                   	nop

Disassembly of section .plt.got:

0000000000001180 <__cxa_finalize@plt>:
    1180:	f3 0f 1e fa          	endbr64 
    1184:	f2 ff 25 65 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e65]        # 3ff0 <__cxa_finalize@GLIBC_2.2.5>
    118b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

Disassembly of section .plt.sec:

0000000000001190 <free@plt>:
    1190:	f3 0f 1e fa          	endbr64 
    1194:	f2 ff 25 7d 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e7d]        # 4018 <free@GLIBC_2.2.5>
    119b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000011a0 <putchar@plt>:
    11a0:	f3 0f 1e fa          	endbr64 
    11a4:	f2 ff 25 75 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e75]        # 4020 <putchar@GLIBC_2.2.5>
    11ab:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000011b0 <strncpy@plt>:
    11b0:	f3 0f 1e fa          	endbr64 
    11b4:	f2 ff 25 6d 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e6d]        # 4028 <strncpy@GLIBC_2.2.5>
    11bb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000011c0 <strcpy@plt>:
    11c0:	f3 0f 1e fa          	endbr64 
    11c4:	f2 ff 25 65 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e65]        # 4030 <strcpy@GLIBC_2.2.5>
    11cb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000011d0 <__reverse@plt>:
    11d0:	f3 0f 1e fa          	endbr64 
    11d4:	f2 ff 25 5d 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e5d]        # 4038 <__reverse@@Base+0x25ca>
    11db:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000011e0 <puts@plt>:
    11e0:	f3 0f 1e fa          	endbr64 
    11e4:	f2 ff 25 55 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e55]        # 4040 <puts@GLIBC_2.2.5>
    11eb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000011f0 <inet_ntoa@plt>:
    11f0:	f3 0f 1e fa          	endbr64 
    11f4:	f2 ff 25 4d 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e4d]        # 4048 <inet_ntoa@GLIBC_2.2.5>
    11fb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001200 <strlen@plt>:
    1200:	f3 0f 1e fa          	endbr64 
    1204:	f2 ff 25 45 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e45]        # 4050 <strlen@GLIBC_2.2.5>
    120b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001210 <__stack_chk_fail@plt>:
    1210:	f3 0f 1e fa          	endbr64 
    1214:	f2 ff 25 3d 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e3d]        # 4058 <__stack_chk_fail@GLIBC_2.4>
    121b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001220 <htons@plt>:
    1220:	f3 0f 1e fa          	endbr64 
    1224:	f2 ff 25 35 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e35]        # 4060 <htons@GLIBC_2.2.5>
    122b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001230 <printf@plt>:
    1230:	f3 0f 1e fa          	endbr64 
    1234:	f2 ff 25 2d 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e2d]        # 4068 <printf@GLIBC_2.2.5>
    123b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001240 <memset@plt>:
    1240:	f3 0f 1e fa          	endbr64 
    1244:	f2 ff 25 25 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e25]        # 4070 <memset@GLIBC_2.2.5>
    124b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001250 <inet_addr@plt>:
    1250:	f3 0f 1e fa          	endbr64 
    1254:	f2 ff 25 1d 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e1d]        # 4078 <inet_addr@GLIBC_2.2.5>
    125b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001260 <strcmp@plt>:
    1260:	f3 0f 1e fa          	endbr64 
    1264:	f2 ff 25 15 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e15]        # 4080 <strcmp@GLIBC_2.2.5>
    126b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001270 <memcpy@plt>:
    1270:	f3 0f 1e fa          	endbr64 
    1274:	f2 ff 25 0d 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e0d]        # 4088 <memcpy@GLIBC_2.14>
    127b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001280 <malloc@plt>:
    1280:	f3 0f 1e fa          	endbr64 
    1284:	f2 ff 25 05 2e 00 00 	bnd jmp QWORD PTR [rip+0x2e05]        # 4090 <malloc@GLIBC_2.2.5>
    128b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

0000000000001290 <__printf_buf@plt>:
    1290:	f3 0f 1e fa          	endbr64 
    1294:	f2 ff 25 fd 2d 00 00 	bnd jmp QWORD PTR [rip+0x2dfd]        # 4098 <__printf_buf@@Base+0x2cff>
    129b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000012a0 <ntohs@plt>:
    12a0:	f3 0f 1e fa          	endbr64 
    12a4:	f2 ff 25 f5 2d 00 00 	bnd jmp QWORD PTR [rip+0x2df5]        # 40a0 <ntohs@GLIBC_2.2.5>
    12ab:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000012b0 <init_lib@plt>:
    12b0:	f3 0f 1e fa          	endbr64 
    12b4:	f2 ff 25 ed 2d 00 00 	bnd jmp QWORD PTR [rip+0x2ded]        # 40a8 <init_lib@@Base+0x2cb4>
    12bb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000012c0 <sprintf@plt>:
    12c0:	f3 0f 1e fa          	endbr64 
    12c4:	f2 ff 25 e5 2d 00 00 	bnd jmp QWORD PTR [rip+0x2de5]        # 40b0 <sprintf@GLIBC_2.2.5>
    12cb:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

00000000000012d0 <dlsym@plt>:
    12d0:	f3 0f 1e fa          	endbr64 
    12d4:	f2 ff 25 dd 2d 00 00 	bnd jmp QWORD PTR [rip+0x2ddd]        # 40b8 <dlsym@GLIBC_2.2.5>
    12db:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

Disassembly of section .text:

00000000000012e0 <deregister_tm_clones>:
    12e0:	48 8d 3d e9 2d 00 00 	lea    rdi,[rip+0x2de9]        # 40d0 <completed.8060>
    12e7:	48 8d 05 e2 2d 00 00 	lea    rax,[rip+0x2de2]        # 40d0 <completed.8060>
    12ee:	48 39 f8             	cmp    rax,rdi
    12f1:	74 15                	je     1308 <deregister_tm_clones+0x28>
    12f3:	48 8b 05 ce 2c 00 00 	mov    rax,QWORD PTR [rip+0x2cce]        # 3fc8 <_ITM_deregisterTMCloneTable>
    12fa:	48 85 c0             	test   rax,rax
    12fd:	74 09                	je     1308 <deregister_tm_clones+0x28>
    12ff:	ff e0                	jmp    rax
    1301:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    1308:	c3                   	ret    
    1309:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

0000000000001310 <register_tm_clones>:
    1310:	48 8d 3d b9 2d 00 00 	lea    rdi,[rip+0x2db9]        # 40d0 <completed.8060>
    1317:	48 8d 35 b2 2d 00 00 	lea    rsi,[rip+0x2db2]        # 40d0 <completed.8060>
    131e:	48 29 fe             	sub    rsi,rdi
    1321:	48 89 f0             	mov    rax,rsi
    1324:	48 c1 ee 3f          	shr    rsi,0x3f
    1328:	48 c1 f8 03          	sar    rax,0x3
    132c:	48 01 c6             	add    rsi,rax
    132f:	48 d1 fe             	sar    rsi,1
    1332:	74 14                	je     1348 <register_tm_clones+0x38>
    1334:	48 8b 05 ad 2c 00 00 	mov    rax,QWORD PTR [rip+0x2cad]        # 3fe8 <_ITM_registerTMCloneTable>
    133b:	48 85 c0             	test   rax,rax
    133e:	74 08                	je     1348 <register_tm_clones+0x38>
    1340:	ff e0                	jmp    rax
    1342:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
    1348:	c3                   	ret    
    1349:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

0000000000001350 <__do_global_dtors_aux>:
    1350:	f3 0f 1e fa          	endbr64 
    1354:	80 3d 75 2d 00 00 00 	cmp    BYTE PTR [rip+0x2d75],0x0        # 40d0 <completed.8060>
    135b:	75 2b                	jne    1388 <__do_global_dtors_aux+0x38>
    135d:	55                   	push   rbp
    135e:	48 83 3d 8a 2c 00 00 	cmp    QWORD PTR [rip+0x2c8a],0x0        # 3ff0 <__cxa_finalize@GLIBC_2.2.5>
    1365:	00 
    1366:	48 89 e5             	mov    rbp,rsp
    1369:	74 0c                	je     1377 <__do_global_dtors_aux+0x27>
    136b:	48 8b 3d 4e 2d 00 00 	mov    rdi,QWORD PTR [rip+0x2d4e]        # 40c0 <__dso_handle>
    1372:	e8 09 fe ff ff       	call   1180 <__cxa_finalize@plt>
    1377:	e8 64 ff ff ff       	call   12e0 <deregister_tm_clones>
    137c:	c6 05 4d 2d 00 00 01 	mov    BYTE PTR [rip+0x2d4d],0x1        # 40d0 <completed.8060>
    1383:	5d                   	pop    rbp
    1384:	c3                   	ret    
    1385:	0f 1f 00             	nop    DWORD PTR [rax]
    1388:	c3                   	ret    
    1389:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

0000000000001390 <frame_dummy>:
    1390:	f3 0f 1e fa          	endbr64 
    1394:	e9 77 ff ff ff       	jmp    1310 <register_tm_clones>

0000000000001399 <__printf_buf>:
    1399:	f3 0f 1e fa          	endbr64 
    139d:	55                   	push   rbp
    139e:	48 89 e5             	mov    rbp,rsp
    13a1:	48 83 ec 20          	sub    rsp,0x20
    13a5:	48 89 7d e8          	mov    QWORD PTR [rbp-0x18],rdi
    13a9:	89 75 e4             	mov    DWORD PTR [rbp-0x1c],esi
    13ac:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [rbp-0x4],0x0
    13b3:	eb 2a                	jmp    13df <__printf_buf+0x46>
    13b5:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
    13b8:	48 63 d0             	movsxd rdx,eax
    13bb:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
    13bf:	48 01 d0             	add    rax,rdx
    13c2:	0f b6 00             	movzx  eax,BYTE PTR [rax]
    13c5:	0f b6 c0             	movzx  eax,al
    13c8:	89 c6                	mov    esi,eax
    13ca:	48 8d 3d 2f 0c 00 00 	lea    rdi,[rip+0xc2f]        # 2000 <_fini+0x438>
    13d1:	b8 00 00 00 00       	mov    eax,0x0
    13d6:	e8 55 fe ff ff       	call   1230 <printf@plt>
    13db:	83 45 fc 01          	add    DWORD PTR [rbp-0x4],0x1
    13df:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
    13e2:	3b 45 e4             	cmp    eax,DWORD PTR [rbp-0x1c]
    13e5:	7c ce                	jl     13b5 <__printf_buf+0x1c>
    13e7:	bf 0a 00 00 00       	mov    edi,0xa
    13ec:	e8 af fd ff ff       	call   11a0 <putchar@plt>
    13f1:	90                   	nop
    13f2:	c9                   	leave  
    13f3:	c3                   	ret    

00000000000013f4 <init_lib>:
    13f4:	f3 0f 1e fa          	endbr64 
    13f8:	55                   	push   rbp
    13f9:	48 89 e5             	mov    rbp,rsp
    13fc:	8b 05 de 2c 00 00    	mov    eax,DWORD PTR [rip+0x2cde]        # 40e0 <is_lib_initialized>
    1402:	85 c0                	test   eax,eax
    1404:	0f 85 ca 00 00 00    	jne    14d4 <init_lib+0xe0>
    140a:	48 8d 35 f5 0b 00 00 	lea    rsi,[rip+0xbf5]        # 2006 <_fini+0x43e>
    1411:	48 c7 c7 ff ff ff ff 	mov    rdi,0xffffffffffffffff
    1418:	e8 b3 fe ff ff       	call   12d0 <dlsym@plt>
    141d:	48 89 c2             	mov    rdx,rax
    1420:	48 8b 05 89 2b 00 00 	mov    rax,QWORD PTR [rip+0x2b89]        # 3fb0 <original_connect@@Base-0x158>
    1427:	48 89 10             	mov    QWORD PTR [rax],rdx
    142a:	48 8d 35 dd 0b 00 00 	lea    rsi,[rip+0xbdd]        # 200e <_fini+0x446>
    1431:	48 c7 c7 ff ff ff ff 	mov    rdi,0xffffffffffffffff
    1438:	e8 93 fe ff ff       	call   12d0 <dlsym@plt>
    143d:	48 89 c2             	mov    rdx,rax
    1440:	48 8b 05 91 2b 00 00 	mov    rax,QWORD PTR [rip+0x2b91]        # 3fd8 <original_send@@Base-0x148>
    1447:	48 89 10             	mov    QWORD PTR [rax],rdx
    144a:	48 8d 35 c2 0b 00 00 	lea    rsi,[rip+0xbc2]        # 2013 <_fini+0x44b>
    1451:	48 c7 c7 ff ff ff ff 	mov    rdi,0xffffffffffffffff
    1458:	e8 73 fe ff ff       	call   12d0 <dlsym@plt>
    145d:	48 89 c2             	mov    rdx,rax
    1460:	48 8b 05 79 2b 00 00 	mov    rax,QWORD PTR [rip+0x2b79]        # 3fe0 <original_gethostbyaddr@@Base-0x148>
    1467:	48 89 10             	mov    QWORD PTR [rax],rdx
    146a:	48 8d 35 b0 0b 00 00 	lea    rsi,[rip+0xbb0]        # 2021 <_fini+0x459>
    1471:	48 c7 c7 ff ff ff ff 	mov    rdi,0xffffffffffffffff
    1478:	e8 53 fe ff ff       	call   12d0 <dlsym@plt>
    147d:	48 89 c2             	mov    rdx,rax
    1480:	48 8b 05 39 2b 00 00 	mov    rax,QWORD PTR [rip+0x2b39]        # 3fc0 <original_getaddrinfo@@Base-0x158>
    1487:	48 89 10             	mov    QWORD PTR [rax],rdx
    148a:	48 8d 35 9c 0b 00 00 	lea    rsi,[rip+0xb9c]        # 202d <_fini+0x465>
    1491:	48 c7 c7 ff ff ff ff 	mov    rdi,0xffffffffffffffff
    1498:	e8 33 fe ff ff       	call   12d0 <dlsym@plt>
    149d:	48 89 c2             	mov    rdx,rax
    14a0:	48 8b 05 11 2b 00 00 	mov    rax,QWORD PTR [rip+0x2b11]        # 3fb8 <original_write@@Base-0x158>
    14a7:	48 89 10             	mov    QWORD PTR [rax],rdx
    14aa:	48 8d 35 82 0b 00 00 	lea    rsi,[rip+0xb82]        # 2033 <_fini+0x46b>
    14b1:	48 c7 c7 ff ff ff ff 	mov    rdi,0xffffffffffffffff
    14b8:	e8 13 fe ff ff       	call   12d0 <dlsym@plt>
    14bd:	48 89 c2             	mov    rdx,rax
    14c0:	48 8b 05 31 2b 00 00 	mov    rax,QWORD PTR [rip+0x2b31]        # 3ff8 <original_read@@Base-0x138>
    14c7:	48 89 10             	mov    QWORD PTR [rax],rdx
    14ca:	c7 05 0c 2c 00 00 01 	mov    DWORD PTR [rip+0x2c0c],0x1        # 40e0 <is_lib_initialized>
    14d1:	00 00 00 
    14d4:	90                   	nop
    14d5:	5d                   	pop    rbp
    14d6:	c3                   	ret    

00000000000014d7 <connect>:
    14d7:	f3 0f 1e fa          	endbr64 
    14db:	55                   	push   rbp
    14dc:	48 89 e5             	mov    rbp,rsp
    14df:	48 83 ec 40          	sub    rsp,0x40
    14e3:	89 7d cc             	mov    DWORD PTR [rbp-0x34],edi
    14e6:	48 89 75 c0          	mov    QWORD PTR [rbp-0x40],rsi
    14ea:	89 55 c8             	mov    DWORD PTR [rbp-0x38],edx
    14ed:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
    14f4:	00 00 
    14f6:	48 89 45 f8          	mov    QWORD PTR [rbp-0x8],rax
    14fa:	31 c0                	xor    eax,eax
    14fc:	b8 00 00 00 00       	mov    eax,0x0
    1501:	e8 aa fd ff ff       	call   12b0 <init_lib@plt>
    1506:	8b 45 cc             	mov    eax,DWORD PTR [rbp-0x34]
    1509:	89 05 b9 2b 00 00    	mov    DWORD PTR [rip+0x2bb9],eax        # 40c8 <static_sockfd>
    150f:	66 c7 45 e0 02 00    	mov    WORD PTR [rbp-0x20],0x2
    1515:	48 8d 3d 1c 0b 00 00 	lea    rdi,[rip+0xb1c]        # 2038 <_fini+0x470>
    151c:	e8 2f fd ff ff       	call   1250 <inet_addr@plt>
    1521:	89 45 e4             	mov    DWORD PTR [rbp-0x1c],eax
    1524:	bf 9b 1f 00 00       	mov    edi,0x1f9b
    1529:	e8 f2 fc ff ff       	call   1220 <htons@plt>
    152e:	66 89 45 e2          	mov    WORD PTR [rbp-0x1e],ax
    1532:	48 8b 45 c0          	mov    rax,QWORD PTR [rbp-0x40]
    1536:	48 89 45 d0          	mov    QWORD PTR [rbp-0x30],rax
    153a:	48 8b 45 d0          	mov    rax,QWORD PTR [rbp-0x30]
    153e:	8b 40 04             	mov    eax,DWORD PTR [rax+0x4]
    1541:	89 c7                	mov    edi,eax
    1543:	e8 a8 fc ff ff       	call   11f0 <inet_ntoa@plt>
    1548:	48 89 45 d8          	mov    QWORD PTR [rbp-0x28],rax
    154c:	48 8b 45 d8          	mov    rax,QWORD PTR [rbp-0x28]
    1550:	48 89 c6             	mov    rsi,rax
    1553:	48 8d 3d 96 2b 00 00 	lea    rdi,[rip+0x2b96]        # 40f0 <original_addr_static>
    155a:	e8 61 fc ff ff       	call   11c0 <strcpy@plt>
    155f:	48 8b 45 d0          	mov    rax,QWORD PTR [rbp-0x30]
    1563:	0f b7 40 02          	movzx  eax,WORD PTR [rax+0x2]
    1567:	0f b7 c0             	movzx  eax,ax
    156a:	89 c7                	mov    edi,eax
    156c:	e8 2f fd ff ff       	call   12a0 <ntohs@plt>
    1571:	0f b7 c0             	movzx  eax,ax
    1574:	89 05 86 2b 00 00    	mov    DWORD PTR [rip+0x2b86],eax        # 4100 <original_port_static>
    157a:	48 8b 45 d8          	mov    rax,QWORD PTR [rbp-0x28]
    157e:	48 89 c6             	mov    rsi,rax
    1581:	48 8d 3d c0 0a 00 00 	lea    rdi,[rip+0xac0]        # 2048 <_fini+0x480>
    1588:	b8 00 00 00 00       	mov    eax,0x0
    158d:	e8 9e fc ff ff       	call   1230 <printf@plt>
    1592:	48 8b 45 d8          	mov    rax,QWORD PTR [rbp-0x28]
    1596:	48 8d 35 d3 0a 00 00 	lea    rsi,[rip+0xad3]        # 2070 <_fini+0x4a8>
    159d:	48 89 c7             	mov    rdi,rax
    15a0:	e8 bb fc ff ff       	call   1260 <strcmp@plt>
    15a5:	85 c0                	test   eax,eax
    15a7:	74 0d                	je     15b6 <connect+0xdf>
    15a9:	48 8b 45 d0          	mov    rax,QWORD PTR [rbp-0x30]
    15ad:	0f b7 00             	movzx  eax,WORD PTR [rax]
    15b0:	66 83 f8 02          	cmp    ax,0x2
    15b4:	74 2a                	je     15e0 <connect+0x109>
    15b6:	48 8d 3d be 0a 00 00 	lea    rdi,[rip+0xabe]        # 207b <_fini+0x4b3>
    15bd:	e8 1e fc ff ff       	call   11e0 <puts@plt>
    15c2:	48 8b 05 e7 29 00 00 	mov    rax,QWORD PTR [rip+0x29e7]        # 3fb0 <original_connect@@Base-0x158>
    15c9:	4c 8b 00             	mov    r8,QWORD PTR [rax]
    15cc:	8b 55 c8             	mov    edx,DWORD PTR [rbp-0x38]
    15cf:	48 8b 4d c0          	mov    rcx,QWORD PTR [rbp-0x40]
    15d3:	8b 45 cc             	mov    eax,DWORD PTR [rbp-0x34]
    15d6:	48 89 ce             	mov    rsi,rcx
    15d9:	89 c7                	mov    edi,eax
    15db:	41 ff d0             	call   r8
    15de:	eb 2a                	jmp    160a <connect+0x133>
    15e0:	48 8d 3d 9e 0a 00 00 	lea    rdi,[rip+0xa9e]        # 2085 <_fini+0x4bd>
    15e7:	e8 f4 fb ff ff       	call   11e0 <puts@plt>
    15ec:	48 8b 05 bd 29 00 00 	mov    rax,QWORD PTR [rip+0x29bd]        # 3fb0 <original_connect@@Base-0x158>
    15f3:	4c 8b 00             	mov    r8,QWORD PTR [rax]
    15f6:	48 8d 4d e0          	lea    rcx,[rbp-0x20]
    15fa:	8b 45 cc             	mov    eax,DWORD PTR [rbp-0x34]
    15fd:	ba 10 00 00 00       	mov    edx,0x10
    1602:	48 89 ce             	mov    rsi,rcx
    1605:	89 c7                	mov    edi,eax
    1607:	41 ff d0             	call   r8
    160a:	48 8b 4d f8          	mov    rcx,QWORD PTR [rbp-0x8]
    160e:	64 48 33 0c 25 28 00 	xor    rcx,QWORD PTR fs:0x28
    1615:	00 00 
    1617:	74 05                	je     161e <connect+0x147>
    1619:	e8 f2 fb ff ff       	call   1210 <__stack_chk_fail@plt>
    161e:	c9                   	leave  
    161f:	c3                   	ret    

0000000000001620 <send>:
    1620:	f3 0f 1e fa          	endbr64 
    1624:	55                   	push   rbp
    1625:	48 89 e5             	mov    rbp,rsp
    1628:	48 81 ec 00 10 00 00 	sub    rsp,0x1000
    162f:	48 83 0c 24 00       	or     QWORD PTR [rsp],0x0
    1634:	48 83 ec 30          	sub    rsp,0x30
    1638:	89 bd ec ef ff ff    	mov    DWORD PTR [rbp-0x1014],edi
    163e:	48 89 b5 e0 ef ff ff 	mov    QWORD PTR [rbp-0x1020],rsi
    1645:	48 89 95 d8 ef ff ff 	mov    QWORD PTR [rbp-0x1028],rdx
    164c:	89 8d e8 ef ff ff    	mov    DWORD PTR [rbp-0x1018],ecx
    1652:	64 48 8b 04 25 28 00 	mov    rax,QWORD PTR fs:0x28
    1659:	00 00 
    165b:	48 89 45 f8          	mov    QWORD PTR [rbp-0x8],rax
    165f:	31 c0                	xor    eax,eax
    1661:	b8 00 00 00 00       	mov    eax,0x0
    1666:	e8 45 fc ff ff       	call   12b0 <init_lib@plt>
    166b:	48 8d 85 f0 ef ff ff 	lea    rax,[rbp-0x1010]
    1672:	ba 00 10 00 00       	mov    edx,0x1000
    1677:	be 00 00 00 00       	mov    esi,0x0
    167c:	48 89 c7             	mov    rdi,rax
    167f:	e8 bc fb ff ff       	call   1240 <memset@plt>
    1684:	48 8b 85 d8 ef ff ff 	mov    rax,QWORD PTR [rbp-0x1028]
    168b:	89 c6                	mov    esi,eax
    168d:	8b 15 6d 2a 00 00    	mov    edx,DWORD PTR [rip+0x2a6d]        # 4100 <original_port_static>
    1693:	48 8b 8d e0 ef ff ff 	mov    rcx,QWORD PTR [rbp-0x1020]
    169a:	48 8d 85 f0 ef ff ff 	lea    rax,[rbp-0x1010]
    16a1:	49 89 c9             	mov    r9,rcx
    16a4:	41 89 f0             	mov    r8d,esi
    16a7:	89 d1                	mov    ecx,edx
    16a9:	48 8d 15 40 2a 00 00 	lea    rdx,[rip+0x2a40]        # 40f0 <original_addr_static>
    16b0:	48 8d 35 e9 09 00 00 	lea    rsi,[rip+0x9e9]        # 20a0 <_fini+0x4d8>
    16b7:	48 89 c7             	mov    rdi,rax
    16ba:	b8 00 00 00 00       	mov    eax,0x0
    16bf:	e8 fc fb ff ff       	call   12c0 <sprintf@plt>
    16c4:	48 8d 35 a5 09 00 00 	lea    rsi,[rip+0x9a5]        # 2070 <_fini+0x4a8>
    16cb:	48 8d 3d 1e 2a 00 00 	lea    rdi,[rip+0x2a1e]        # 40f0 <original_addr_static>
    16d2:	e8 89 fb ff ff       	call   1260 <strcmp@plt>
    16d7:	85 c0                	test   eax,eax
    16d9:	75 2b                	jne    1706 <send+0xe6>
    16db:	48 8b 05 f6 28 00 00 	mov    rax,QWORD PTR [rip+0x28f6]        # 3fd8 <original_send@@Base-0x148>
    16e2:	4c 8b 00             	mov    r8,QWORD PTR [rax]
    16e5:	8b 8d e8 ef ff ff    	mov    ecx,DWORD PTR [rbp-0x1018]
    16eb:	48 8b 95 d8 ef ff ff 	mov    rdx,QWORD PTR [rbp-0x1028]
    16f2:	48 8b b5 e0 ef ff ff 	mov    rsi,QWORD PTR [rbp-0x1020]
    16f9:	8b 85 ec ef ff ff    	mov    eax,DWORD PTR [rbp-0x1014]
    16ff:	89 c7                	mov    edi,eax
    1701:	41 ff d0             	call   r8
    1704:	eb 49                	jmp    174f <send+0x12f>
    1706:	48 8d 85 f0 ef ff ff 	lea    rax,[rbp-0x1010]
    170d:	48 89 c2             	mov    rdx,rax
    1710:	be 00 08 00 00       	mov    esi,0x800
    1715:	48 8d 3d 8f 09 00 00 	lea    rdi,[rip+0x98f]        # 20ab <_fini+0x4e3>
    171c:	b8 00 00 00 00       	mov    eax,0x0
    1721:	e8 0a fb ff ff       	call   1230 <printf@plt>
    1726:	48 8b 05 ab 28 00 00 	mov    rax,QWORD PTR [rip+0x28ab]        # 3fd8 <original_send@@Base-0x148>
    172d:	4c 8b 00             	mov    r8,QWORD PTR [rax]
    1730:	8b 95 e8 ef ff ff    	mov    edx,DWORD PTR [rbp-0x1018]
    1736:	48 8d b5 f0 ef ff ff 	lea    rsi,[rbp-0x1010]
    173d:	8b 85 ec ef ff ff    	mov    eax,DWORD PTR [rbp-0x1014]
    1743:	89 d1                	mov    ecx,edx
    1745:	ba 00 10 00 00       	mov    edx,0x1000
    174a:	89 c7                	mov    edi,eax
    174c:	41 ff d0             	call   r8
    174f:	48 8b 7d f8          	mov    rdi,QWORD PTR [rbp-0x8]
    1753:	64 48 33 3c 25 28 00 	xor    rdi,QWORD PTR fs:0x28
    175a:	00 00 
    175c:	74 05                	je     1763 <send+0x143>
    175e:	e8 ad fa ff ff       	call   1210 <__stack_chk_fail@plt>
    1763:	c9                   	leave  
    1764:	c3                   	ret    

0000000000001765 <gethostbyaddr>:
    1765:	f3 0f 1e fa          	endbr64 
    1769:	55                   	push   rbp
    176a:	48 89 e5             	mov    rbp,rsp
    176d:	48 83 ec 20          	sub    rsp,0x20
    1771:	48 89 7d e8          	mov    QWORD PTR [rbp-0x18],rdi
    1775:	89 75 e4             	mov    DWORD PTR [rbp-0x1c],esi
    1778:	89 55 e0             	mov    DWORD PTR [rbp-0x20],edx
    177b:	48 8d 3d 46 09 00 00 	lea    rdi,[rip+0x946]        # 20c8 <_fini+0x500>
    1782:	e8 59 fa ff ff       	call   11e0 <puts@plt>
    1787:	b8 00 00 00 00       	mov    eax,0x0
    178c:	e8 1f fb ff ff       	call   12b0 <init_lib@plt>
    1791:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
    1795:	48 89 45 f8          	mov    QWORD PTR [rbp-0x8],rax
    1799:	48 8b 45 f8          	mov    rax,QWORD PTR [rbp-0x8]
    179d:	8b 40 04             	mov    eax,DWORD PTR [rax+0x4]
    17a0:	89 c7                	mov    edi,eax
    17a2:	e8 49 fa ff ff       	call   11f0 <inet_ntoa@plt>
    17a7:	48 89 c6             	mov    rsi,rax
    17aa:	48 8d 3d 43 09 00 00 	lea    rdi,[rip+0x943]        # 20f4 <_fini+0x52c>
    17b1:	b8 00 00 00 00       	mov    eax,0x0
    17b6:	e8 75 fa ff ff       	call   1230 <printf@plt>
    17bb:	48 8b 05 1e 28 00 00 	mov    rax,QWORD PTR [rip+0x281e]        # 3fe0 <original_gethostbyaddr@@Base-0x148>
    17c2:	4c 8b 00             	mov    r8,QWORD PTR [rax]
    17c5:	8b 55 e0             	mov    edx,DWORD PTR [rbp-0x20]
    17c8:	8b 4d e4             	mov    ecx,DWORD PTR [rbp-0x1c]
    17cb:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
    17cf:	89 ce                	mov    esi,ecx
    17d1:	48 89 c7             	mov    rdi,rax
    17d4:	41 ff d0             	call   r8
    17d7:	c9                   	leave  
    17d8:	c3                   	ret    

00000000000017d9 <getaddrinfo>:
    17d9:	f3 0f 1e fa          	endbr64 
    17dd:	55                   	push   rbp
    17de:	48 89 e5             	mov    rbp,rsp
    17e1:	48 83 ec 20          	sub    rsp,0x20
    17e5:	48 89 7d f8          	mov    QWORD PTR [rbp-0x8],rdi
    17e9:	48 89 75 f0          	mov    QWORD PTR [rbp-0x10],rsi
    17ed:	48 89 55 e8          	mov    QWORD PTR [rbp-0x18],rdx
    17f1:	48 89 4d e0          	mov    QWORD PTR [rbp-0x20],rcx
    17f5:	48 8d 3d 1c 09 00 00 	lea    rdi,[rip+0x91c]        # 2118 <_fini+0x550>
    17fc:	e8 df f9 ff ff       	call   11e0 <puts@plt>
    1801:	b8 00 00 00 00       	mov    eax,0x0
    1806:	e8 a5 fa ff ff       	call   12b0 <init_lib@plt>
    180b:	48 8b 05 ae 27 00 00 	mov    rax,QWORD PTR [rip+0x27ae]        # 3fc0 <original_getaddrinfo@@Base-0x158>
    1812:	4c 8b 00             	mov    r8,QWORD PTR [rax]
    1815:	48 8b 4d e0          	mov    rcx,QWORD PTR [rbp-0x20]
    1819:	48 8b 55 e8          	mov    rdx,QWORD PTR [rbp-0x18]
    181d:	48 8b 75 f0          	mov    rsi,QWORD PTR [rbp-0x10]
    1821:	48 8b 45 f8          	mov    rax,QWORD PTR [rbp-0x8]
    1825:	48 89 c7             	mov    rdi,rax
    1828:	41 ff d0             	call   r8
    182b:	c9                   	leave  
    182c:	c3                   	ret    

000000000000182d <write>:
    182d:	f3 0f 1e fa          	endbr64 
    1831:	55                   	push   rbp
    1832:	48 89 e5             	mov    rbp,rsp
    1835:	48 83 ec 40          	sub    rsp,0x40
    1839:	89 7d dc             	mov    DWORD PTR [rbp-0x24],edi
    183c:	48 89 75 d0          	mov    QWORD PTR [rbp-0x30],rsi
    1840:	48 89 55 c8          	mov    QWORD PTR [rbp-0x38],rdx
    1844:	b8 00 00 00 00       	mov    eax,0x0
    1849:	e8 62 fa ff ff       	call   12b0 <init_lib@plt>
    184e:	8b 05 74 28 00 00    	mov    eax,DWORD PTR [rip+0x2874]        # 40c8 <static_sockfd>
    1854:	39 45 dc             	cmp    DWORD PTR [rbp-0x24],eax
    1857:	75 17                	jne    1870 <write+0x43>
    1859:	48 8d 35 10 08 00 00 	lea    rsi,[rip+0x810]        # 2070 <_fini+0x4a8>
    1860:	48 8d 3d 89 28 00 00 	lea    rdi,[rip+0x2889]        # 40f0 <original_addr_static>
    1867:	e8 f4 f9 ff ff       	call   1260 <strcmp@plt>
    186c:	85 c0                	test   eax,eax
    186e:	75 2e                	jne    189e <write+0x71>
    1870:	48 8d 3d cb 08 00 00 	lea    rdi,[rip+0x8cb]        # 2142 <_fini+0x57a>
    1877:	e8 64 f9 ff ff       	call   11e0 <puts@plt>
    187c:	48 8b 05 35 27 00 00 	mov    rax,QWORD PTR [rip+0x2735]        # 3fb8 <original_write@@Base-0x158>
    1883:	4c 8b 00             	mov    r8,QWORD PTR [rax]
    1886:	48 8b 55 c8          	mov    rdx,QWORD PTR [rbp-0x38]
    188a:	48 8b 4d d0          	mov    rcx,QWORD PTR [rbp-0x30]
    188e:	8b 45 dc             	mov    eax,DWORD PTR [rbp-0x24]
    1891:	48 89 ce             	mov    rsi,rcx
    1894:	89 c7                	mov    edi,eax
    1896:	41 ff d0             	call   r8
    1899:	e9 f2 00 00 00       	jmp    1990 <write+0x163>
    189e:	bf 00 10 00 00       	mov    edi,0x1000
    18a3:	e8 d8 f9 ff ff       	call   1280 <malloc@plt>
    18a8:	48 89 45 f8          	mov    QWORD PTR [rbp-0x8],rax
    18ac:	48 8b 45 f8          	mov    rax,QWORD PTR [rbp-0x8]
    18b0:	ba 00 10 00 00       	mov    edx,0x1000
    18b5:	be 00 00 00 00       	mov    esi,0x0
    18ba:	48 89 c7             	mov    rdi,rax
    18bd:	e8 7e f9 ff ff       	call   1240 <memset@plt>
    18c2:	8b 15 38 28 00 00    	mov    edx,DWORD PTR [rip+0x2838]        # 4100 <original_port_static>
    18c8:	48 8b 45 f8          	mov    rax,QWORD PTR [rbp-0x8]
    18cc:	89 d1                	mov    ecx,edx
    18ce:	48 8d 15 1b 28 00 00 	lea    rdx,[rip+0x281b]        # 40f0 <original_addr_static>
    18d5:	48 8d 35 71 08 00 00 	lea    rsi,[rip+0x871]        # 214d <_fini+0x585>
    18dc:	48 89 c7             	mov    rdi,rax
    18df:	b8 00 00 00 00       	mov    eax,0x0
    18e4:	e8 d7 f9 ff ff       	call   12c0 <sprintf@plt>
    18e9:	c7 45 ec 00 00 00 00 	mov    DWORD PTR [rbp-0x14],0x0
    18f0:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [rbp-0x10],0x0
    18f7:	eb 1e                	jmp    1917 <write+0xea>
    18f9:	8b 45 f0             	mov    eax,DWORD PTR [rbp-0x10]
    18fc:	48 63 d0             	movsxd rdx,eax
    18ff:	48 8b 45 f8          	mov    rax,QWORD PTR [rbp-0x8]
    1903:	48 01 d0             	add    rax,rdx
    1906:	0f b6 00             	movzx  eax,BYTE PTR [rax]
    1909:	3c 0a                	cmp    al,0xa
    190b:	75 06                	jne    1913 <write+0xe6>
    190d:	8b 45 f0             	mov    eax,DWORD PTR [rbp-0x10]
    1910:	89 45 ec             	mov    DWORD PTR [rbp-0x14],eax
    1913:	83 45 f0 01          	add    DWORD PTR [rbp-0x10],0x1
    1917:	83 7d f0 31          	cmp    DWORD PTR [rbp-0x10],0x31
    191b:	7e dc                	jle    18f9 <write+0xcc>
    191d:	83 45 ec 01          	add    DWORD PTR [rbp-0x14],0x1
    1921:	8b 45 ec             	mov    eax,DWORD PTR [rbp-0x14]
    1924:	48 63 d0             	movsxd rdx,eax
    1927:	48 8b 45 f8          	mov    rax,QWORD PTR [rbp-0x8]
    192b:	48 8d 0c 02          	lea    rcx,[rdx+rax*1]
    192f:	48 8b 55 c8          	mov    rdx,QWORD PTR [rbp-0x38]
    1933:	48 8b 45 d0          	mov    rax,QWORD PTR [rbp-0x30]
    1937:	48 89 c6             	mov    rsi,rax
    193a:	48 89 cf             	mov    rdi,rcx
    193d:	e8 2e f9 ff ff       	call   1270 <memcpy@plt>
    1942:	48 8d 3d 0b 08 00 00 	lea    rdi,[rip+0x80b]        # 2154 <_fini+0x58c>
    1949:	e8 92 f8 ff ff       	call   11e0 <puts@plt>
    194e:	48 8b 45 f8          	mov    rax,QWORD PTR [rbp-0x8]
    1952:	be 32 00 00 00       	mov    esi,0x32
    1957:	48 89 c7             	mov    rdi,rax
    195a:	e8 31 f9 ff ff       	call   1290 <__printf_buf@plt>
    195f:	48 8b 05 52 26 00 00 	mov    rax,QWORD PTR [rip+0x2652]        # 3fb8 <original_write@@Base-0x158>
    1966:	4c 8b 00             	mov    r8,QWORD PTR [rax]
    1969:	48 8b 4d f8          	mov    rcx,QWORD PTR [rbp-0x8]
    196d:	8b 45 dc             	mov    eax,DWORD PTR [rbp-0x24]
    1970:	ba 00 10 00 00       	mov    edx,0x1000
    1975:	48 89 ce             	mov    rsi,rcx
    1978:	89 c7                	mov    edi,eax
    197a:	41 ff d0             	call   r8
    197d:	89 45 f4             	mov    DWORD PTR [rbp-0xc],eax
    1980:	48 8b 45 f8          	mov    rax,QWORD PTR [rbp-0x8]
    1984:	48 89 c7             	mov    rdi,rax
    1987:	e8 04 f8 ff ff       	call   1190 <free@plt>
    198c:	48 8b 45 c8          	mov    rax,QWORD PTR [rbp-0x38]
    1990:	c9                   	leave  
    1991:	c3                   	ret    

0000000000001992 <read>:
    1992:	f3 0f 1e fa          	endbr64 
    1996:	55                   	push   rbp
    1997:	48 89 e5             	mov    rbp,rsp
    199a:	48 83 ec 20          	sub    rsp,0x20
    199e:	89 7d fc             	mov    DWORD PTR [rbp-0x4],edi
    19a1:	48 89 75 f0          	mov    QWORD PTR [rbp-0x10],rsi
    19a5:	48 89 55 e8          	mov    QWORD PTR [rbp-0x18],rdx
    19a9:	b8 00 00 00 00       	mov    eax,0x0
    19ae:	e8 fd f8 ff ff       	call   12b0 <init_lib@plt>
    19b3:	48 8d 3d b6 07 00 00 	lea    rdi,[rip+0x7b6]        # 2170 <_fini+0x5a8>
    19ba:	e8 21 f8 ff ff       	call   11e0 <puts@plt>
    19bf:	48 8b 05 32 26 00 00 	mov    rax,QWORD PTR [rip+0x2632]        # 3ff8 <original_read@@Base-0x138>
    19c6:	4c 8b 00             	mov    r8,QWORD PTR [rax]
    19c9:	48 8b 55 e8          	mov    rdx,QWORD PTR [rbp-0x18]
    19cd:	48 8b 4d f0          	mov    rcx,QWORD PTR [rbp-0x10]
    19d1:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
    19d4:	48 89 ce             	mov    rsi,rcx
    19d7:	89 c7                	mov    edi,eax
    19d9:	41 ff d0             	call   r8
    19dc:	c9                   	leave  
    19dd:	c3                   	ret    

00000000000019de <put_addr>:
    19de:	f3 0f 1e fa          	endbr64 
    19e2:	55                   	push   rbp
    19e3:	48 89 e5             	mov    rbp,rsp
    19e6:	48 83 ec 30          	sub    rsp,0x30
    19ea:	48 89 7d e8          	mov    QWORD PTR [rbp-0x18],rdi
    19ee:	48 89 75 e0          	mov    QWORD PTR [rbp-0x20],rsi
    19f2:	48 89 55 d8          	mov    QWORD PTR [rbp-0x28],rdx
    19f6:	89 4d d4             	mov    DWORD PTR [rbp-0x2c],ecx
    19f9:	44 89 45 d0          	mov    DWORD PTR [rbp-0x30],r8d
    19fd:	8b 45 d4             	mov    eax,DWORD PTR [rbp-0x2c]
    1a00:	48 63 d0             	movsxd rdx,eax
    1a03:	48 8b 4d e8          	mov    rcx,QWORD PTR [rbp-0x18]
    1a07:	48 8b 45 d8          	mov    rax,QWORD PTR [rbp-0x28]
    1a0b:	48 89 ce             	mov    rsi,rcx
    1a0e:	48 89 c7             	mov    rdi,rax
    1a11:	e8 9a f7 ff ff       	call   11b0 <strncpy@plt>
    1a16:	8b 45 d4             	mov    eax,DWORD PTR [rbp-0x2c]
    1a19:	48 98                	cdqe   
    1a1b:	48 8d 50 01          	lea    rdx,[rax+0x1]
    1a1f:	48 8b 45 d8          	mov    rax,QWORD PTR [rbp-0x28]
    1a23:	48 01 d0             	add    rax,rdx
    1a26:	c6 00 0a             	mov    BYTE PTR [rax],0xa
    1a29:	8b 45 d4             	mov    eax,DWORD PTR [rbp-0x2c]
    1a2c:	83 c0 02             	add    eax,0x2
    1a2f:	89 45 f8             	mov    DWORD PTR [rbp-0x8],eax
    1a32:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [rbp-0x4],0x0
    1a39:	eb 27                	jmp    1a62 <put_addr+0x84>
    1a3b:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
    1a3e:	48 63 d0             	movsxd rdx,eax
    1a41:	48 8b 45 e0          	mov    rax,QWORD PTR [rbp-0x20]
    1a45:	48 01 d0             	add    rax,rdx
    1a48:	8b 55 f8             	mov    edx,DWORD PTR [rbp-0x8]
    1a4b:	48 63 ca             	movsxd rcx,edx
    1a4e:	48 8b 55 d8          	mov    rdx,QWORD PTR [rbp-0x28]
    1a52:	48 01 ca             	add    rdx,rcx
    1a55:	0f b6 00             	movzx  eax,BYTE PTR [rax]
    1a58:	88 02                	mov    BYTE PTR [rdx],al
    1a5a:	83 45 f8 01          	add    DWORD PTR [rbp-0x8],0x1
    1a5e:	83 45 fc 01          	add    DWORD PTR [rbp-0x4],0x1
    1a62:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
    1a65:	3b 45 d0             	cmp    eax,DWORD PTR [rbp-0x30]
    1a68:	7c d1                	jl     1a3b <put_addr+0x5d>
    1a6a:	90                   	nop
    1a6b:	90                   	nop
    1a6c:	c9                   	leave  
    1a6d:	c3                   	ret    

0000000000001a6e <__reverse>:
    1a6e:	f3 0f 1e fa          	endbr64 
    1a72:	55                   	push   rbp
    1a73:	48 89 e5             	mov    rbp,rsp
    1a76:	48 83 ec 20          	sub    rsp,0x20
    1a7a:	48 89 7d e8          	mov    QWORD PTR [rbp-0x18],rdi
    1a7e:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [rbp-0x8],0x0
    1a85:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
    1a89:	48 89 c7             	mov    rdi,rax
    1a8c:	e8 6f f7 ff ff       	call   1200 <strlen@plt>
    1a91:	83 e8 01             	sub    eax,0x1
    1a94:	89 45 fc             	mov    DWORD PTR [rbp-0x4],eax
    1a97:	eb 4d                	jmp    1ae6 <__reverse+0x78>
    1a99:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
    1a9c:	48 63 d0             	movsxd rdx,eax
    1a9f:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
    1aa3:	48 01 d0             	add    rax,rdx
    1aa6:	0f b6 00             	movzx  eax,BYTE PTR [rax]
    1aa9:	88 45 f7             	mov    BYTE PTR [rbp-0x9],al
    1aac:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
    1aaf:	48 63 d0             	movsxd rdx,eax
    1ab2:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
    1ab6:	48 01 d0             	add    rax,rdx
    1ab9:	8b 55 f8             	mov    edx,DWORD PTR [rbp-0x8]
    1abc:	48 63 ca             	movsxd rcx,edx
    1abf:	48 8b 55 e8          	mov    rdx,QWORD PTR [rbp-0x18]
    1ac3:	48 01 ca             	add    rdx,rcx
    1ac6:	0f b6 00             	movzx  eax,BYTE PTR [rax]
    1ac9:	88 02                	mov    BYTE PTR [rdx],al
    1acb:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
    1ace:	48 63 d0             	movsxd rdx,eax
    1ad1:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
    1ad5:	48 01 c2             	add    rdx,rax
    1ad8:	0f b6 45 f7          	movzx  eax,BYTE PTR [rbp-0x9]
    1adc:	88 02                	mov    BYTE PTR [rdx],al
    1ade:	83 45 f8 01          	add    DWORD PTR [rbp-0x8],0x1
    1ae2:	83 6d fc 01          	sub    DWORD PTR [rbp-0x4],0x1
    1ae6:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
    1ae9:	3b 45 fc             	cmp    eax,DWORD PTR [rbp-0x4]
    1aec:	7c ab                	jl     1a99 <__reverse+0x2b>
    1aee:	90                   	nop
    1aef:	90                   	nop
    1af0:	c9                   	leave  
    1af1:	c3                   	ret    

0000000000001af2 <itoa>:
    1af2:	f3 0f 1e fa          	endbr64 
    1af6:	55                   	push   rbp
    1af7:	48 89 e5             	mov    rbp,rsp
    1afa:	48 83 ec 20          	sub    rsp,0x20
    1afe:	89 7d ec             	mov    DWORD PTR [rbp-0x14],edi
    1b01:	48 89 75 e0          	mov    QWORD PTR [rbp-0x20],rsi
    1b05:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [rbp-0x8],0x0
    1b0c:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [rbp-0x4],0x0
    1b13:	83 7d ec 00          	cmp    DWORD PTR [rbp-0x14],0x0
    1b17:	79 07                	jns    1b20 <itoa+0x2e>
    1b19:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [rbp-0x4],0x1
    1b20:	8b 4d ec             	mov    ecx,DWORD PTR [rbp-0x14]
    1b23:	48 63 c1             	movsxd rax,ecx
    1b26:	48 69 c0 67 66 66 66 	imul   rax,rax,0x66666667
    1b2d:	48 c1 e8 20          	shr    rax,0x20
    1b31:	89 c2                	mov    edx,eax
    1b33:	c1 fa 02             	sar    edx,0x2
    1b36:	89 c8                	mov    eax,ecx
    1b38:	c1 f8 1f             	sar    eax,0x1f
    1b3b:	29 c2                	sub    edx,eax
    1b3d:	89 d0                	mov    eax,edx
    1b3f:	c1 e0 02             	shl    eax,0x2
    1b42:	01 d0                	add    eax,edx
    1b44:	01 c0                	add    eax,eax
    1b46:	29 c1                	sub    ecx,eax
    1b48:	89 ca                	mov    edx,ecx
    1b4a:	89 d0                	mov    eax,edx
    1b4c:	8d 48 30             	lea    ecx,[rax+0x30]
    1b4f:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
    1b52:	8d 50 01             	lea    edx,[rax+0x1]
    1b55:	89 55 f8             	mov    DWORD PTR [rbp-0x8],edx
    1b58:	48 63 d0             	movsxd rdx,eax
    1b5b:	48 8b 45 e0          	mov    rax,QWORD PTR [rbp-0x20]
    1b5f:	48 01 d0             	add    rax,rdx
    1b62:	89 ca                	mov    edx,ecx
    1b64:	88 10                	mov    BYTE PTR [rax],dl
    1b66:	8b 45 ec             	mov    eax,DWORD PTR [rbp-0x14]
    1b69:	48 63 d0             	movsxd rdx,eax
    1b6c:	48 69 d2 67 66 66 66 	imul   rdx,rdx,0x66666667
    1b73:	48 c1 ea 20          	shr    rdx,0x20
    1b77:	c1 fa 02             	sar    edx,0x2
    1b7a:	c1 f8 1f             	sar    eax,0x1f
    1b7d:	29 c2                	sub    edx,eax
    1b7f:	89 d0                	mov    eax,edx
    1b81:	89 45 ec             	mov    DWORD PTR [rbp-0x14],eax
    1b84:	83 7d ec 00          	cmp    DWORD PTR [rbp-0x14],0x0
    1b88:	7f 96                	jg     1b20 <itoa+0x2e>
    1b8a:	83 7d fc 00          	cmp    DWORD PTR [rbp-0x4],0x0
    1b8e:	74 13                	je     1ba3 <itoa+0xb1>
    1b90:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
    1b93:	48 98                	cdqe   
    1b95:	48 8d 50 01          	lea    rdx,[rax+0x1]
    1b99:	48 8b 45 e0          	mov    rax,QWORD PTR [rbp-0x20]
    1b9d:	48 01 d0             	add    rax,rdx
    1ba0:	c6 00 2d             	mov    BYTE PTR [rax],0x2d
    1ba3:	8b 45 f8             	mov    eax,DWORD PTR [rbp-0x8]
    1ba6:	48 98                	cdqe   
    1ba8:	48 8d 50 01          	lea    rdx,[rax+0x1]
    1bac:	48 8b 45 e0          	mov    rax,QWORD PTR [rbp-0x20]
    1bb0:	48 01 d0             	add    rax,rdx
    1bb3:	c6 00 00             	mov    BYTE PTR [rax],0x0
    1bb6:	48 8b 45 e0          	mov    rax,QWORD PTR [rbp-0x20]
    1bba:	48 89 c7             	mov    rdi,rax
    1bbd:	e8 0e f6 ff ff       	call   11d0 <__reverse@plt>
    1bc2:	90                   	nop
    1bc3:	c9                   	leave  
    1bc4:	c3                   	ret    

Disassembly of section .fini:

0000000000001bc8 <_fini>:
    1bc8:	f3 0f 1e fa          	endbr64 
    1bcc:	48 83 ec 08          	sub    rsp,0x8
    1bd0:	48 83 c4 08          	add    rsp,0x8
    1bd4:	c3                   	ret    
