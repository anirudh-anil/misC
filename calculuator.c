#include <stdio.h>
#include <stdlib.h> // for exit()

int main(){
    char op;
    long double a, b, ans;
    printf("Enter operator:\n\t Addition: +\n\t Subtraction: -\n\t Multiplication: *\n\t Division: /\n>>> ");
    scanf(" %c", &op);
    printf("Enter the numbers seperated by a whitespace character: ");
    scanf(" %Lf %Lf", &a, &b);

    switch (op){
        
        case '+': {
            ans = a + b;
            break;
        }

        case '-': {
            ans = a - b;
            break;
        }

        case '*': {
            ans = a * b;
            break;
        }

        case '/': {
            if (b == 0){
                printf("Cannot divide by zero\n");
                exit(0);
            }
            else {
                ans = a / b;
                break;
            }
        }

        default: {
            printf("Invalid selection\n");
            exit(0);
        }
                 
    }

    printf("The answer is: %Lg \n", ans);
    return 0;


}