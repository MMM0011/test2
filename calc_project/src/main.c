#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main() {
    int choice, a, b;
    double result;
    long fact;
    
    printf("Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Factorial\n");
    printf("6. Square Root\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", add(a, b));
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", subtract(a, b));
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", multiply(a, b));
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = divide(a, b);
            if (b != 0) {
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case 5:
            printf("Enter a number: ");
            scanf("%d", &a);
            fact = factorial(a);
            if (a >= 0) {
                printf("Result: %ld\n", fact);
            } else {
                printf("Error: Negative number\n");
            }
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%lf", &result);
            result = square_root(result);
            if (result >= 0) {
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Negative number\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}
