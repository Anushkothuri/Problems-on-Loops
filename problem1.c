// Print N natural numbers given by user.
#include<stdio.h>
int main()
{
    int N,i;
    printf("enter N value:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d\t",i);
    }
    return 0;
}