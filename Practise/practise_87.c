#include <stdio.h>
// A general purpose payroll
int main()
{
    typedef struct company
    {
        char name[20];
        char id[10];
        float basicSalary;
        float bonus;
        float tax;

    } payroll;
    payroll emp[50];
    float bonusAmount, taxAmount, finalSalary;
    for (int i = 0; i < 10; i++)
    {
        printf("Details for employee %d\n", i + 1);
        printf("Name of employee \n");
        fgets(emp[i].name, 20, stdin);
        printf("Id of employee \n");
        scanf(" %s", emp[i].id);
        printf("Basic Salary of employee (per annum) \n");
        scanf(" %f", &emp[i].basicSalary);
        printf("Bonus percentage given to employee\n");
        scanf(" %f", &emp[i].bonus);
        printf("Tax percentage for employee\n");
        scanf(" %f", &emp[i].bonus);
        printf("Tax\n");
        scanf(" %f", &emp[i].tax);
        getchar();
        bonusAmount = emp[i].basicSalary * (emp[i].bonus / 100);
        taxAmount = emp[i].basicSalary * (emp[i].tax / 100);
        finalSalary = emp[i].basicSalary + bonusAmount - taxAmount;
        printf("=> Final salary for %s (ID: %s): ₹%.2f\n", emp[i].name, emp[i].id, finalSalary);
    }
    return 0;
}