#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "printFlag.c"
// gcc -z execstack -z norelro -fno-stack-protector -o format1 format1.c

int main(int argc, char *argv[])
{
    int target = 0xdeadbeef;
    char buffer[64];
	printf("Cafe sucks!!\n");
    fgets(buffer, 64, stdin);
    printf(buffer);

    if(target == 0xcafebabe) {
		printFlag();
      	return EXIT_SUCCESS;
  	} else {
  	  	printf("Cafe still sucks...\n");
  	  	exit(EXIT_FAILURE);
  	}
}
