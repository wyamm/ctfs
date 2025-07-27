#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "printFlag.c"


int age;

void secret_club() {
    if (age < 18) {
        printf("Sorry, kiddo. Come back when you're older!\n");
    } else {
        printFlag();
    }
}

int main() {
    char name[40];
    age = 17;

    printf("What's your name, stranger?\n");

    gets(name);
    printf("Nice to meat you, ");
    printf(name);
    printf("\n");

    return 0;
}