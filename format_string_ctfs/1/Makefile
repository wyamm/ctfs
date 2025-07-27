.PHONY = all clean

CC = gcc
COMPILE_FLAGS = -g -O0 -fno-stack-protector -no-pie # -m32
	# -g: default level of debug information
	# -O0: do not optimise (Optimisation level 0)
	# -fno-stack-protector: disable stack protectors (canaries(?))
	# -no-pie: disable position independent execution - disables relative paths for addresses
	# -m32: compile as a 32 bit program

all: 1_whats_the_pass_word
apple: 1_whats_the_pass_word_apple


1_whats_the_pass_word:
	${CC} ${COMPILE_FLAGS} -m32 -o ./whats_the_pass_word whats_the_pass_word.c


1_whats_the_pass_word_apple:
	${CC} ${COMPILE_FLAGS} -o ./whats_the_pass_word whats_the_pass_word.c

clean:
	rm -rf ./whats_the_pass_word ./whats_the_pass_word.dSYM
