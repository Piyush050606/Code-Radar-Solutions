#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[10];
    scanf("%s",&a);
    printf("You entered: %s",a);
    return 0;
}