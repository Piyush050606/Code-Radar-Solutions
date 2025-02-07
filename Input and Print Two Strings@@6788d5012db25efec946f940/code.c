#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[100];
    char b[100];
    scanf("%s %s",&a,&b);
    printf("%s\n",a,b);
    return 0;
}