#include <stdio.h>

int main()
{
    int op, i=0, j=0, flag=0; char str1[100]={}, str2[100]={}, str3[200]={};
    printf("Enter operation:\n\t1. Concatenation\n\t2. Comparison\n\t3. Length\n\t4. Copy\n> ");
    scanf(" %d", &op);
    switch (op){
        case 1:
            printf("String 1: ");
            scanf("%s", &str1);
            printf("String 2: ");
            scanf("%s", &str2);
            while(str1[i] != '\0'){
                str3[j++] = str1[i++];
            }
            i=0;
            while(str2[i] != '\0'){
                str3[j++] = str2[i++];    
            }
            str3[j] = '\0';
            i = j = 0;
            printf("Result: %s\n", str3);
            break;
        
        case 2:
            printf("String 1: ");
            scanf("%s", &str1);
            printf("String 2: ");
            scanf("%s", &str2);
            while (str1[i] != '\0' && str2[i] != '\0' && str1[i]==str2[i]) i++;
            if (str1[i]>str2[i]) flag=1;
            else if (str1[i]<str2[i]) flag = -1;
            switch (flag){
                case 1: printf("String 1 > String 2\n"); break;
                case -1: printf("String 1 < String 2\n"); break;
                default: printf("String 1 = String 2\n"); break;
            }
            break;
            case 3: 
                printf("String: ");
                scanf("%s", &str1);
                while(str1[i++]);
                printf("Length: %d\n", i-1);
                break;
            case 4:
                printf("Enter string 1: ");
                scanf("%s", &str1);
                while(str1[i]){ str2[i]=str1[i];i++;}
                str2[i] = '\0';
                printf("String 2: %s\n", str2);
                break;
        default:
            printf("Invalid Selection!\n"); break;


    }
    return 0;
}
