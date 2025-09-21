#include <stdio.h>

int main(){

    unsigned int num, sum, digit;

    printf("Enter the positive integer: ");
    scanf(" %u", &num);
    // u for unsigned int
    // unsigned store only 0 or positive

    sum = 0;
    while (num > 0){
        digit = num % 10;
        num /= 10;
        sum += digit;
    }

    printf("Sum of digits: %u\n", sum);
    return 0;



}