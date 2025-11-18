#include <stdio.h>
struct Student
{
    int rollno;
    char fname[50], lname[50];
    float calculus, cp, ee, edc, ep;
};

int main(){
    int n, i; float total, avg;
    printf("Number of students: ");
    scanf(" %d", &n);
    if (n<=0) {printf("Check Input!\n"); return 0;}
    struct Student st[n];
    
    for(i=0; i<n; i++){
        printf("\nSl no: %d\n", i+1);
        printf("Roll No: ");
        scanf(" %d", &st[i].rollno);
        printf("First and last name: ");
        scanf(" %s %s", st[i].fname, st[i].lname);
        printf("Marks in calculus, CP, EE, EDC and EP: ");
        scanf(" %f %f %f %f %f", &st[i].calculus, &st[i].cp, &st[i].ee, &st[i].edc, &st[i].ep);
    }
    
    printf("\n\n");
    printf("| SL | Roll No | First Name | Last Name | Calculus |  CP  |  EE  |  EDC  |  EP  |  Total  |  Avg  |");
    for (i=0; i<n; i++){
        total = st[i].calculus + st[i].cp + st[i].ee + st[i].edc + st[i].ep;
        avg = total/5;
        printf("|-%4d|%-9d|%-12s|%-11s|%-10.2f|%-6.2f|%-6.2f|%-7.2f|%-6.2f|%-9.2f|%-7.2f|\n",
        i+1, st[i].rollno, st[i].fname, st[i].lname, st[i].calculus, st[i].cp, st[i].ee, st[i].edc, st[i].ep, total, avg);
    }
    return 0;
}
