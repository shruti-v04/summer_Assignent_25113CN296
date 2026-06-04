#include<stdio.h>
#include<math.h>
int main()
{
    // Q13: Generate Fibonacci series
    int n, first = 0, second = 1, next;
    printf("Enter number of terms for Fibonacci series: ");
    scanf("%d", &n);
    
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");

    // Q14: Find nth Fibonacci term
    int n_term, first_ft = 0, second_ft = 1, next_ft;
    printf("\nEnter n for nth Fibonacci term: ");
    scanf("%d", &n_term);
    
    if (n_term <= 0) {
        printf("Please enter a positive integer\n");
    } else if (n_term == 1) {
        printf("The %dth Fibonacci term is %d\n", n_term, first_ft);
    } else if (n_term == 2) {
        printf("The %dnd Fibonacci term is %d\n", n_term, second_ft);
    } else {
        for (int i = 3; i <= n_term; i++) {
            next_ft = first_ft + second_ft;
            first_ft = second_ft;
            second_ft = next_ft;
        }
        printf("The %dth Fibonacci term is %d\n", n_term, second_ft);
    }

    // Q15: Check Armstrong number
    int num, temp, remainder, sum = 0, digits = 0;
    printf("\nEnter a number to check Armstrong: ");
    scanf("%d", &num);
    
    temp = num;
    
    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = num;
    
    // Calculate sum of digits raised to power of digit count
    while (temp > 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    
    if (num == sum) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    // Q16: Print Armstrong numbers in a range
    int lower, upper, temp_ar, remainder_ar, sum_ar, digits_ar;
    printf("\nEnter lower limit for Armstrong range: ");
    scanf("%d", &lower);
    printf("Enter upper limit for Armstrong range: ");
    scanf("%d", &upper);
    
    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    
    for (int i = lower; i <= upper; i++) {
        if (i <= 0) continue;
        
        temp_ar = i;
        sum_ar = 0;
        digits_ar = 0;
        
        // Count digits
        while (temp_ar > 0) {
            digits_ar++;
            temp_ar /= 10;
        }
        
        temp_ar = i;
        
        // Calculate sum
        while (temp_ar > 0) {
            remainder_ar = temp_ar % 10;
            sum_ar += pow(remainder_ar, digits_ar);
            temp_ar /= 10;
        }
        
        if (i == sum_ar) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}