#include <stdio.h>//calculator 
int main() {
double num1, num2, result;
int choice;
printf("Enter first number, second number: ");
scanf("%lf%lf", &num1,&num2);
printf("\nCalculator Menu\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("Enter your choice (1-4): ");
scanf("%d", &choice);
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Division by zero is not possible\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;
        default:
            printf("Invalid option\n");
            break;
    }

    return 0;
}
