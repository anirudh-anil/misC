#include <stdio.h>
int main(){
    int r1, c1, r2, c2, op, i,j,k;
    printf("Enter rows and columns of matrix 1: "); scanf(" %d %d", &r1, &c1);
    printf("Enter rows and columns of matrix 2: "); scanf(" %d %d", &r2, &c2);
    int a[r1][c1], b[r2][c2]; 
    printf("Enter Operation:\n\t1. Addition\n\t2. Multiplication\n> ");
    scanf(" %d", &op);
    switch (op){
        case 1:
            if (r1!=r2 || c1!=c2) {printf("Cannot add matrices!\n"); break;}
            {int c[r1][c1];
            printf("Enter matrix 1:\n");
            for(i=0;i<r1;i++) for(j=0;j<c1;j++) scanf("%d", &a[i][j]);
            printf("Enter matrix 2:\n");
            for(i=0;i<r1;i++) for(j=0;j<c1;j++) scanf("%d", &b[i][j]);
            for(i=0;i<r1;i++) for(j=0;j<c1;j++) c[i][j] = a[i][j]+b[i][j];
            printf("\nResult:\n");
            for(i=0;i<r1;i++) {
                for(j=0;j<c1;j++) printf("%d  ", c[i][j]);
                printf("\n"); 
            }}
            break;
        case 2:
            if (c1!=r2) {printf("Cannot multiply matrices!\n"); break;}
            {int c[r1][c2];
            printf("Enter matrix 1:\n");
            for(i=0;i<r1;i++) for(j=0;j<c1;j++) scanf("%d", &a[i][j]);
            printf("Enter matrix 2:\n");
            for(i=0;i<r2;i++) for(j=0;j<c2;j++) scanf("%d", &b[i][j]);
            for(i=0;i<r1;i++) for(j=0;j<c2;j++) c[i][j] = 0;
            for(i=0;i<r1;i++) for(j=0;j<c2;j++) for(k=0;k<c1;k++) c[i][j] = c[i][j] + (a[i][k]*b[k][j]);
            printf("\nResult:\n");
            for(i=0;i<r1;i++) {
                for(j=0;j<c2;j++) printf("%d  ", c[i][j]);
                printf("\n"); 
            }}
            break;
        default:
            printf("Invalid operator!\n"); break;
    }
    return 0;
}