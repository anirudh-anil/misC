#include <stdio.h>
#include <math.h> // for sqrt

int main(){
    double a, b, c, D, x1, x2; 
    double comp1, comp2; // for complex roots
    
    printf("Enter the coefficient of x^2 (a): ");
    scanf("%lf", &a); // lf for a double
    
    printf("Enter the coefficient of x (b): ");
    scanf("%lf", &b);

    printf("Enter the constant (c): ");
    scanf("%lf", &c);

    D = b*b - 4*a*c;
    if (D > 0){
        printf("Positive discriminant. Roots are real and distinct.\n");
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
        printf("Roots are: %lf and %lf \n", x1, x2);
    }

    else if (D==0){
        printf("Discriminant is zero, means roots are real and equal.\n");
        x1 = (-b/(2*a));
        printf("Both roots are: %lf \n", x1);
    }
    else {
        printf("Discriminant is negative and roots of quadratic equation are complex.\n");
        comp1 = -b/(2*a);
        comp2 = sqrt(-D)/(2*a);
        printf("Roots are: %lf±%lfi \n", comp1, comp2);
        // to type ± using linux keyboard use ctrl + shift + u followed by the hexadecimal code for the character which is b1
        // ie ctrl+shift+u then b1

    }
    



    return 0;
    
}