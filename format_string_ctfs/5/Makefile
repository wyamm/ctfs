.PHONY = all clean

CC = gcc
COMPILE_FLAGS = -g -O0 -fno-stack-protector -no-pie # -m32
	# -g: default level of debug information
	# -O0: do not optimise (Optimisation level 0)
	# -fno-stack-protector: disable stack protectors (canaries(?))
	# -no-pie: disable position independent execution - disables relative paths for addresses
	# -m32: compile as a 32 bit program

all: 1_bit_of_everything
apple: 1_bit_of_everything_apple


1_bit_of_everything:
	${CC} ${COMPILE_FLAGS} -m32 -o ./bit_of_everything bit_of_everything.c


1_bit_of_everything_apple:
	${CC} ${COMPILE_FLAGS} -o ./bit_of_everything bit_of_everything.c

clean:
	rm -rf ./bit_of_everything ./bit_of_everything.dSYM
