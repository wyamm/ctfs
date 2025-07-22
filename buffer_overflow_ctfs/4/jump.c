#include <stdlib.h>
#include <stdio.h>
#include "printFlag.c"

#define TRUE 1
#define FALSE 0

int printName();

int win();

int main(int argv, char **argc) {

    printf("Welcome!\n");
    printName();
    printf("Everything is good.\n");

    return EXIT_SUCCESS;
}

int printName() {
    int isAdmin = 0;
    char name[16];

    printf("What is your name?\n");
    printf("> ");
    gets(&name);

    printf("Welcome, %s!\n", name);
    printf("You are not an admin... Ok bye!\n");

    return EXIT_SUCCESS;
}

int win() {
    // There is no way to get to this function.
    printf("Hmm actually on second thought, you look like an admin, here is your flag!\n");
    printFlag();

    return EXIT_SUCCESS;
}
