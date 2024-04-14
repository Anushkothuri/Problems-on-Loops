// Using for loop print even numbers in between 
// first K natural numbers given by user.
#include<stdio.h>
int main()
{
    int K,i;
    printf("enter K value:");
    scanf("%d",&K);
    for(i=1;i<=K;i++)
    {
        if(i%2==0)
        printf("%d is even number.\n",i);
    }
    return 0;
}