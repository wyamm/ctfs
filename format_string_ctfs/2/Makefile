.PHONY = all clean

CC = gcc
COMPILE_FLAGS = -g -O0 -fno-stack-protector -no-pie # -m32
	# -g: default level of debug information
	# -O0: do not optimise (Optimisation level 0)
	# -fno-stack-protector: disable stack protectors (canaries(?))
	# -no-pie: disable position independent execution - disables relative paths for addresses
	# -m32: compile as a 32 bit program

all: 1_change_my_mind
apple: 1_change_my_mind_apple


1_change_my_mind:
	${CC} ${COMPILE_FLAGS} -m32 -o ./change_my_mind change_my_mind.c


1_change_my_mind_apple:
	${CC} ${COMPILE_FLAGS} -o ./change_my_mind change_my_mind.c

clean:
	rm -rf ./change_my_mind ./change_my_mind.dSYM
