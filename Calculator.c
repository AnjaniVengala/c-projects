#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter calculation: ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch(op) {
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero!\n");
                return 1;
            }
            break;
        case '*': result = num1 * num2;
                break;
        case '+': result = num1 + num2;
                break;
        case '-': result = num1 - num2;
                break;
        case '^': result = pow(num1, num2);
                break;
        case ' ': result = sqrt(num2);
                break;
        default:
            printf("Error: Invalid operator!\n");
            return 1;
    }

    printf("%.9g %c %.9g = %.6g\n", num1, op, num2, result);
    return 0;
}
