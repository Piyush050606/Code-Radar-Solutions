#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[100];
    char b[100];
    scanf("%s %s",&a,&b);
    printf("You entered: %s and %s",a,b);
    return 0;
}