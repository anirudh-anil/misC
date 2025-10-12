#include <stdio.h>

int main(){
    int rows, i, j, term=1, s;
    printf("Enter the number of rows to be printed: ");
    scanf("%d", &rows);
    for (i=0; i<rows; i++){
        for (s=1;s<rows-i;s++) printf(" ");
        for (j=0; j<=i; j++){
            if(j==0||i==0) term =1;
            else term = term*(i-j+1)/j;
            printf("%-4d", term);
        }
        printf("\n");
    }
    return 0;
}