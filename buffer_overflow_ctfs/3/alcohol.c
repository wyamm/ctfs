#include <stdlib.h>
#include <stdio.h>
#include "printFlag.c"

#define TRUE 1
#define FALSE 0

int purchaseAlcohol();

int main(int argv, char **argc) {

    printf("Welcome!\n");
    purchaseAlcohol();
    printf("Everything is good.\n");

    return EXIT_SUCCESS;
}

int purchaseAlcohol() {
    int is_over_18 = FALSE;
    int is_id_real = 0xDEADBEEF;
    char name[16];

    printf("What is your name?\n");
    printf("> ");
    gets(&name);

    if (is_over_18 == TRUE) {
        if (is_id_real != 0xDEADBEEF) {
            printf("Your id is fake!\n");
            return EXIT_FAILURE;
        } else {
            printf("Welcome, %s!\n", name);
            printf("Here is your alcohol...\n");
            printFlag();
            return EXIT_SUCCESS;
        }
    } else {
        printf("Welcome, %s!\n", name);
        printf("You are not over 18, I can not sell you alcohol\n");
        printf("Here is some orange juice\n");
        return EXIT_SUCCESS;
    }
}
