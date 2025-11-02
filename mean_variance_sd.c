#include <stdio.h>
#include <math.h>
double mean(double [], int );
double variance(double [], int );
double sd(double [], int);
int main()
{
    int n, i;  
    printf("Number of numbers: ");
    scanf(" %d", &n);
    double nums[n];
    printf("Enter numbers: ");
    for(i=0;i<n;i++) scanf(" %lf", &nums[i]);
    printf("Mean: %lf\tVariance: %lf\tStandard Deviation: %lf\n", mean(nums, n), variance(nums, n), sd(nums, n));
    return 0;
}

double mean(double nums[], int n){
    int j; double sum=0;
    for (j=0; j<n; j++) sum+=nums[j];
    return sum/n;
}

double variance(double nums[], int n){
    int j; double m = mean(nums, n), v=0;
    for (j=0; j<n; j++) v+=pow((nums[j]-m), 2);
    return v/n; 
}

double sd(double nums[], int n){
    return sqrt(variance(nums, n));
}