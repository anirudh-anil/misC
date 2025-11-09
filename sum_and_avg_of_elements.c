#include <stdio.h>

int main(){
    int n, i;
    double sum=0, avg;
    printf("Number of elements: ");
    scanf(" %d", &n);
    int a[n];
    printf("Enter %d numbers: ", n);
    for (i=0; i<n; i++) scanf("%d", &a[i]);
    for (i=0;i<n;i++) sum+=a[i];
    avg = sum/n;
    printf("Sum: %lf\tAverage: %lf\n", sum, avg);
    return 0;
}