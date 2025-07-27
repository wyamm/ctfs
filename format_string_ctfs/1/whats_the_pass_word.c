#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "printFlag.c"

int main(int argc, char *argv[]) {
    char pass[8] = "P@SSW0RD";
    int *ptr = pass;
    char buf[100];
    printf("What is the password?\n");

    fgets(buf, 100, stdin);
    buf[strcspn(buf, "\n")] = '\0';

    if(!strncmp(pass, buf, sizeof(pass))){
        printf("Greetings!\n");
        printFlag();
        return EXIT_SUCCESS;
    } else {
        printf(buf);
        printf(" does not have access!\n");
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
