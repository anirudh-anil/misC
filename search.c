#include <stdio.h>

int sSequential(int [], int, int);
int sBinary(int [], int, int);
int main()
{
    int n, i, j, key, ss, sb, temp;
    printf("Number of numbers: "); scanf(" %d", &n);
    int numbers[n];
    printf("Enter %d numbers: ", n);
    for (j=0; j<n; j++) scanf("%d", &numbers[j]);
    printf("Enter key to search: "); scanf("%d", &key);

    ss = sSequential(numbers, n, key);
    // Sorting for Binary search to work
    for (i=0; i<n-1; i++)
        for (j=0; j<n-i-1;j++){
            if (numbers[j]>numbers[j+1]){
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }

    sb = sBinary(numbers, n, key);
    
    printf("Sequential search: ");
    if (ss != -1) printf("Found at index %d position %d\n", ss, ss+1); else printf("Not found!\n");
    if (sb!=-1) printf("Binary search has found the key in entered numbers\n"); else printf("Binary search couldn't find the key!\n");

    

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
