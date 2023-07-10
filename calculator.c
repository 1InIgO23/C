#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1;
    int num2;
    char op;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    while (getchar() != '\n');

    printf("Enter the operator: ");
    scanf("%c", &op);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (op == '+') {
        printf("The sum is: %d", num1 + num2);
    } else if (op == '-') {
        printf("The rest is: %d", num1 - num2);
    } else if (op == '/') {
        printf("The division is %f", (float) num1 / num2);
    } else if (op == '*') {
        printf("The multiplication is %d", num1 * num2);
    } else {
        printf("Invalid input");
    }
    
    return 0;
}
