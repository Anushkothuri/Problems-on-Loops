// Using forloop find factorial of user given input.
#include<stdio.h>
int main()
{
    int n,i,factorial=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }
    {
        printf("factorial of %d is %d",n,factorial);
    }
    return 0;
}