/*5.Write a program to Find sum of digits of a 
number.*/
#include<stdio.h>
int main()
{
    int sum=0;
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    while(number!=0){
        sum+=number%10;
        number/=10;
    }
    printf("the sum of digits of the given number is %d",sum);
    
/*6.Write a program to Reverse a number. */

    int rev=0;
    int num;
    printf("\n enter the number:");
    scanf("%d",&num);
    while(num!=0){
        rev=rev*10+num%10;
        num/=10;
    }
    printf("the reverse of the given number is %d",rev);


/*7.Write a program to Find product of digits. */

    int product=1;
    int n;
    printf("\n enter the number:");
    scanf("%d",&n);
    while(n!=0){
        product*=n%10;
        n/=10;
    }
    printf("the product of digits of the given number is %d",product);

/*8.Write a program to Check whether a number is 
palindrome. */
    int original,reverse=0;
    printf("\n enter the number:");
    scanf("%d",&original);
    n=original;
    while(n!=0){
        reverse=reverse*10+n%10;
        n/=10;
    }
    if(original==reverse){
        printf("the given number is a palindrome");
    }
    else{
        printf("the given number is not a palindrome");
    }
    return 0;
}