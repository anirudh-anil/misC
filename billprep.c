#include <stdio.h>
#include <stdlib.h>

int main(){
    int base_r, excessbase;
    float excessunit_r;
    double units, due;
    printf("Enter consumption in units: ");
    scanf("%lf", &units);

    if (0<=units && units<=200){
        excessbase = 0;
        excessunit_r = 0.5;
        base_r = 0;
    }
    else if (units <= 400){
        excessbase = 200;
        excessunit_r = 0.65;
        base_r = 100;
    }
    else if (units <= 600){
        excessbase = 400;
        excessunit_r = 0.8;
        base_r = 230;
    }
    else if (units>600){
        excessbase = 600;
        excessunit_r = 1;
        base_r = 390;
    }
    else {
        printf("Invalid\n");
        exit(0);
    }

    due = base_r + ((units - excessbase) * excessunit_r);
    printf("Due: Rs %g/-\n", due);
    return 0;
}