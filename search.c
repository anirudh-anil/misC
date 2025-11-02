#include <stdio.h>

int sSequential(int [], int, int);
int sBinary(int [], int, int);
int main()
{
    int n, j, key, ss, sb;
    printf("Number of numbers: "); scanf(" %d", &n);
    int numbers[n];
    printf("Enter %d numbers: ", n);
    for (j=0; j<n; j++) scanf("%d", &numbers[j]);
    printf("Enter key to search: "); scanf("%d", &key);

    ss = sSequential(numbers, n, key);
    sb = sBinary(numbers, n, key);
    
    printf("Sequential search: ");
    if (ss != -1) printf("Found at index %d position %d\n", ss, ss+1); else printf("Not found!");
    printf("Binary search: ");
    if (sb != -1) printf("Found at index %d position %d\n", sb, sb+1); else printf("Not found!");

    return 0;
}

int sSequential(int nums[], int n, int key){
    int i;
    for (i=0; i<n; i++){
        if (nums[i] == key) return i;
    }
    return -1;
}

int sBinary(int nums[], int n, int key){
    int low=0, high=n-1, mid;
    while (low<=high){
        mid = (low+high)/2;
        if (nums[mid]==key) return mid;
        if (nums[mid]<key) low=mid+1;
        else high = mid-1;
    }
    return -1;
}
