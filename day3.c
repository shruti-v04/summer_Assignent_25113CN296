/*9)Write a program to Check whether a number is 
prime. */
#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<=1){
        printf("the given number is not prime");
    
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("the given number is prime");
    }
    else{
        printf("the given number is not prime");
    }
    
/*10)Write a program to Print prime numbers in a 
range. */
    int lower,upper;
    printf("\n enter the lower limit:");
    scanf("%d",&lower);
    printf("enter the upper limit:");
    scanf("%d",&upper);
    printf("the prime numbers between %d and %d are:\n",lower,upper);
    for(int i=lower;i<=upper;i++){
        if(i<=1){
            continue;
        }
        flag=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",i);
        }
    }
/*11)Write a program to Find GCD of two numbers.*/
    int a,b,gcd;
    printf("\n enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    printf("the GCD of %d and %d is %d",a,b,gcd);


/*12)Write a program to Find LCM of two numbers.*/
    int c,d,lcm ,gcd_cd;
    printf("\n enter the first number:");
    scanf("%d",&c);
    printf("enter the second number:");
    scanf("%d",&d);
    gcd_cd=1;
    for(int i=1;i<=c && i<=d;i++){
        if(c%i==0 && d%i==0){
            gcd_cd=i;
        }
    }
    lcm=(c*d)/gcd_cd;
    printf("the LCM of %d and %d is %d",c,d,lcm);
    return 0;
}