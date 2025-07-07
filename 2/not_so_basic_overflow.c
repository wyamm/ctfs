#include <stdlib.h>
#include <stdio.h>
#include "printFlag.c"

#define BUFSIZE 100

int printName();

int main(int argv, char **argc) {

    printf("Welcome!\n");
    printName();
    printf("Everything is good.\n");

    return EXIT_SUCCESS;
}

int printName() {
    int secret = 0xdeadbeef;
    char name[BUFSIZE];

    printf("What is your name?\n");
    printf("> ");
    gets(&name);
    printf("Welcome, %s!\n", name);

    if (secret == 0xbeef) {
        printf("You are in this program, but we do not grant you the rank of Admin.\n");
    } else {
        printf("With great power comes great responsibility...\n");
        printFlag();
    }
    return EXIT_SUCCESS;
}

