#include<stdio.h>
int main()
{
    // Q1: Calculate sum of first N natural numbers
    int n, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers is %d\n", n, sum);

    // Q2: Print multiplication table of a given number
    int num;
    printf("\nEnter a number for multiplication table: ");
    scanf("%d", &num);
    
    printf("Multiplication table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    // Q3: Find factorial of a number
    int num_fact, factorial = 1;
    printf("\nEnter a number for factorial: ");
    scanf("%d", &num_fact);
    
    for (int i = 1; i <= num_fact; i++) {
        factorial *= i;
    }
    printf("Factorial of %d is %d\n", num_fact, factorial);

    // Q4: Count digits in a number
    int num_digits, count = 0;
    printf("\nEnter a number to count digits: ");
    scanf("%d", &num_digits);
    
    if (num_digits == 0) {
        count = 1;
    } else {
        if (num_digits < 0) {
            num_digits = -num_digits;  // Handle negative numbers
        }
        while (num_digits > 0) {
            count++;
            num_digits /= 10;
        }
    }
    printf("Number of digits: %d\n", count);

    return 0;
}