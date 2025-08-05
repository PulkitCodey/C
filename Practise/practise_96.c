#include <stdio.h>

typedef struct
{
    char Name[10];
    float salary;
} Emp_Details;
Emp_Details emp1, emp2;

int main()
{
        printf("Enter employee details:-\n");
        fgets(emp1.Name, 10, stdin);
        puts("Enter employee salary:-");
        scanf(" %f", &emp1.salary);
        getchar();
        printf("Enter employee details:-\n");
        fgets(emp2.Name, 10, stdin);
        puts("Enter employee salary:-");
        scanf(" %f", &emp2.salary);
        getchar();
FILE *emp;
emp = fopen("feeder_96.txt","w");
fprintf(emp ,"Employee Details\n");
fprintf(emp ,"Employee 1\n");
fprintf(emp, "%s, %.2f", emp1.Name, emp1.salary);
fprintf(emp ,"Employee 2\n");
fprintf(emp, "%s, %.2f", emp2.Name, emp2.salary);

    return 0;
    
}