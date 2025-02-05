#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",& num);

    printf("Hexadecimal: %X\n",num);
    printf("Octal: %O\n",num);
    return 0;
}