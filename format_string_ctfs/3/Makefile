.PHONY = all clean

CC = gcc
COMPILE_FLAGS = -g -O0 -fno-stack-protector -no-pie # -m32
	# -g: default level of debug information
	# -O0: do not optimise (Optimisation level 0)
	# -fno-stack-protector: disable stack protectors (canaries(?))
	# -no-pie: disable position independent execution - disables relative paths for addresses
	# -m32: compile as a 32 bit program

all: 1_jump_2
apple: 1_jump_2_apple


1_jump_2:
	${CC} ${COMPILE_FLAGS} -m32 -o ./jump_2 jump_2.c


1_jump_2_apple:
	${CC} ${COMPILE_FLAGS} -o ./jump_2 jump_2.c

clean:
	rm -rf ./jump_2 ./jump_2.dSYM
