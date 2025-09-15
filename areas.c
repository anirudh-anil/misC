/*Program to calculate areas of a triangle, rectangle and a square*/
#include <stdio.h>
#include <stdlib.h>
void areat(void), arear(void), areas(void);
int main(){
    int selection;
    for(;;){
        printf("Select option:\n\t0. exit\n\t1. triangle\n\t2. rectangle\n\t3. square\n>>> ");
        scanf("%d", &selection);
        switch (selection){
            case 0: exit(0);
            case 1: areat(); break;
            case 2: arear(); break;
            case 3: areas(); break;
            default: printf("Invalid response\n"); break;
        }
    }
}


void areat(void){
    int a, b; float a_triangle;
    printf("Enter the sides of the triangle: ");
    scanf("%d%d", &a, &b);
    a_triangle = 0.5*a*b;
    printf("Area of triangle is %g sq units\n", a_triangle);
    return;
}

void areas(void){
    int a, a_square;
    printf("Enter the side of the square: ");
    scanf("%d", &a);
    a_square = a*a;
    printf("Area of the square is %d sq units\n", a_square);
    return;
}

void arear(void){
    int a, b, a_rectangle;
    printf("Enter the sides of the rectangle: ");
    scanf("%d%d", &a, &b);
    a_rectangle = a*b;
    printf("Area of rectangle is %d sq units\n", a_rectangle);
    return;
}

