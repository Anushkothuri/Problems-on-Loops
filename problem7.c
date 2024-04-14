// Using while loop read input value from User print "K to 1".
#include<stdio.h>
int main()
{
    int K,i;
    printf("enter a number:");
    scanf("%d",&K);
    i=1;
    while(i<=K)
    {
        printf("%d\t",K);
        K--;
    }
    return 0;
}