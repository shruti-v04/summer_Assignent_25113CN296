/*1.Write a program to Calculate sum of first N 
natural numbers. */

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
      

/*2.Write a program to Print multiplication table of 
a given number.*/

    int num;
    printf("\n enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
    
/* 3. Write a program to Find factorial of a number. */

    int fact=1;
    int nm;
    printf("\n enter the number:");
    scanf("%d",&nm);
    for(int i=1;i<=nm;i++){
        fact*=i;
    }
    printf("the factorial of %d is %d",nm,fact);

/* 4.  Write a program to Count digits in a number.*/

    int count=0;
    int number;
    printf("\n enter the number:");
    scanf("%d",&number);
    while(number!=0){
        number/=10;
        count++;
    }
    printf("the number of digits in the given number is %d",count);
    return 0;
    
}