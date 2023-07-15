#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum(int num1, int num2) {
    int result = num1 + num2;
    return result;
}
int subtraction(int num1, int num2) {
    int result = num1 - num2;
    return result;
}
int multiplication(int num1, int num2) {
    int result = num1 * num2;
    return result;
}
double division(double num1, double num2) {
    double result = num1 / num2;
    return result;
}

int main()
{
    int a;
    int b;
    char op;
    
    printf("Enter the first number: ");
    scanf("%d", &a);

    while (getchar() != '\n');

    printf("Enter the operator: ");
    scanf("%c", &op);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (op == '+') {
        int result = sum(a, b);
        printf("%d\n", result);
    } else if (op == '-') {
        int result = subtraction(a, b);
        printf("%d\n", result);
    } else if (op == '/') {
        double result = division(a, b);
        printf("%f\n", result);
    } else if (op == '*') {
        int result = multiplication(a, b);
        printf("%d\n", result);
    } else {
        printf("Invalid input");
    }
    
    return 0;
}
