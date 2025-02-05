#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int sum= a+b;
    printf("Sum:%d",sum);
    return 0;
}