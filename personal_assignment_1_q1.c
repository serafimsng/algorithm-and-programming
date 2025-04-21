#include <stdio.h>

int main() {

    int a, b;
    float result;

    printf("Enter two integers \n");
    printf("Enter the first integer: ");
    scanf("%d", &a); 
    printf("Enter the second integer: ");
    scanf("%d", &b); 

    if (b == 0) {
        printf("Division by zero is not allowed\n");
        return 1;
    }

    result = (float) a / b;
    printf("The division of %d and %d is %f\n", a, b, result);
    return 0;
}
