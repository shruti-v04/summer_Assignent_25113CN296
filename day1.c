#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the natural number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }       
    printf("the sum of first %d natural numbers is %d",n,sum);
    return 0;   
}