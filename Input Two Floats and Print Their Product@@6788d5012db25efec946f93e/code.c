#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    printf("Product: %.2f",a*b);
    return 0;
}