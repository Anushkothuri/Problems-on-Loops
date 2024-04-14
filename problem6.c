#include<stdio.h>
int main()
{
    int K,i;
    printf("enter a number:");
    scanf("%d",&K);
    i=1;
    while(i<=K)
    {
        printf("%d\t",i);
        i++;
    }
    return 0;
}