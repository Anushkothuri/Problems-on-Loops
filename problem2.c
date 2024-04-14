/*Print Natural numbers from User "K value to 1".
 Using forloop*/
#include<stdio.h>
int main()
{
    int K,i;
    printf("enter K value:");
    scanf("%d",&K);
    for(i=K;i>=1;i--)
    {
        printf("%d\t",i);
    }
    return 0;
}