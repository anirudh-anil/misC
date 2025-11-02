#include <stdio.h>
#include <string.h>
int main()
{
    int n, i=0, j;
    printf("Enter number of names: ");
    scanf(" %d", &n);
    char name[n][100];
    char temp[100];
    printf("Enter %d names:\n", n);
    for (i=0; i<n;i++) scanf("%s", &name[i]);

    for (i=0; i< n-1; i++){
        for (j=0; j<n-i-1; j++){
            if (strcmp(name[j], name[j+1]) > 0){
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], temp);
            }
        }
    }

    printf("\nSorted names:\n");
    for (i=0;i<n;i++) printf("%s\n", name[i]);

    return 0;
}
