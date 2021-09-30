#include <stdio.h>

int main(int argn, char** argc) {
    puts("Lispy Version 0.0.1");
    puts("Author: Ranmal Dias\n");

    static char buffer[2048];
    //Ctrl + c to quit the interpretor
    while(1) {
        fputs("lispy> ", stdout);
        fgets(buffer, 2048, stdin);
        printf("You entered %s", buffer);
    }
}