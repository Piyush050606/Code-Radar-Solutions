#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float radius;
    scanf("%f",&radius);
    printf("Area: %.2f",3.14*(radius*radius));
    return 0;
}