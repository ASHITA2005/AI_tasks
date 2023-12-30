/* four-operation calculator program */
#include <stdio.h>

int main() {
    float n1, n2, ans;
    char c, o;
    
    do {
        printf("Do you want to continue? Enter 'y' or 'n': ");
        scanf(" %c", &c); 
        
        if (c == 'n') 
            break;

        printf("Enter the first number: ");
        scanf("%f", &n1);

        printf("Enter the second number: ");
        scanf("%f", &n2);

        printf("Enter the operation you wish to perform (+ - / *): ");
        scanf(" %c", &o);

        switch (o) {
            case '+':
                ans = n1 + n2;
                break;
            case '-':
                ans = n1 - n2;
                break;
            case '/':
                if (n2 != 0) {
                    ans = n1 / n2;
                } else {
                    printf(" Division by zero is not allowed.\n");
                    continue; 
                }
                break;
            case '*':
                ans = n1 * n2;
                break;
            default:
                printf("Invalid operation \n");
                continue; 
        }

        printf("The answer is %f\n", ans);
    } while (c != 'n');

    return 0;
};
