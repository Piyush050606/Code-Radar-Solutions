#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i % 11 ==0 && i % 5==0)
    {printf("Divisible");
    }
    else
    {
        printf("Not Divisible");
    }
    return 0;
}