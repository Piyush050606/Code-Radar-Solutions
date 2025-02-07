#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[100];
    int b;
    char c[100];
    scanf("%s %d %s",&a,&b,&c);
    printf("Name: %s\n Age: %d\n Hobby:%s",a,b,c);
    return 0;
}