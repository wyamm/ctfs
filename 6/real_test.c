#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "printFlag.c"

#define BUFSIZE 512

void secret(unsigned int arg1, unsigned int arg2) {
    if (arg1 != 0xDEADBEEF) {
        printf("Hmm, something is not quite right");
        return;
    }

    if (arg2 != 0xCAFEF00D) {
        printf("Getting closer...");
        return;
    }

    printFlag();
}

void printName() {
    char name[BUFSIZE];
    printf("What is your name?\n");
    printf("> ");
    gets(&name);
    printf("Welcome %s\n", name);
}

int main() {
    printf("Hello!");
    printName();
    return 0;
}