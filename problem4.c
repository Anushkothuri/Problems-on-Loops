// Using for loop print multiplication table of user input number.
#include<stdio.h>
int main()
{
    int n,i,mul;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mul=n;
        mul*=i;
        printf("%dX%d=%d\n",n,i,mul);
    }
    return 0;
}