#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "printFlag.c"

int target;

void vuln(char *string) {
    printf(string);
    if (target) {
        printFlag();
    }
    printf("Not here...\n");
}

int main() {
    char buffer[64];
    fgets(buffer, 64, stdin);
    printf("Find me...\n");
    vuln(buffer);
}
