#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "printFlag.c"

void secret() {
    printFlag();
}

void vuln() {
    char buf[100];
    printf("What is your name?\n");
    fgets(buf, sizeof(buf), stdin);
    printf("Hello ");
    printf(buf);
    printf("\n");
    exit(1);
}

int main() {
    vuln();
}