#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("Average: %.2f",(float) (a+b+c)/3 );
    return 0;
}