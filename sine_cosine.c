#include <stdio.h>

int main(){
    int i, n, choice;
    double x, sine, cosine, term;
    printf("Enter angle in degrees: ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    x *= 3.1415926536/180; // convert to radian
    printf("Enter choice\n\t1. Sine\n\t2. Cosine\n> ");
    scanf("%d", &choice);
    if (choice == 1){
        term = sine = x;
        for (i=1; i<=n; i++){
            term *= -(x*x)/(2*i*(2*i+1));
            sine += term;
        }
        printf("%lf\n", sine);
    }
    else if (choice == 2){
        term = cosine = 1;
        for (i = 1; i<=n; i++){
            term *= -(x*x)/(2*i*((2*i)-1));
            cosine += term;
        }
        printf("%lf\n", cosine);

    }
    else printf("Invalid choice\n");
 
    return 0;
}