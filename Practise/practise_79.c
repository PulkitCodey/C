#include <stdio.h>
#include <string.h>
// This is code to store name salary and code of three employees
struct employee 
{
    char name[10];
    int code;
    float salary;
};// Here we made a struct before main function because we are making show function and to use it we need to declare name struct before making a function

void show(struct employee e);
void show(struct employee e){
    printf("Name %s Emp_code %d salary %.2f\n",e.name,e.code,e.salary);
}
//A code to show example of struct and how to use it
int main() {

struct employee e1 , e2 , e3;
    printf("Employee Name:- \n");
    scanf("%s",e1.name);
    printf("Employee Code:- \n");
    scanf("%d",e1.code);
    printf("Employee Salary:- \n"); 
    scanf("%f",e1.salary);
    
    printf("Employee Name:- \n");
    scanf("%s",e2.name);
    printf("Employee Code:- \n");
    scanf("%d",e2.code);
    printf("Employee Salary:- \n");
    scanf("%f",e2.salary);
    
    printf("Employee Name:- \n");
    scanf("%s",e3.name);
    printf("Employee Code:- \n");
    scanf("%d",e3.code);
    printf("Employee Salary:- \n");
    scanf("%f",e3.salary);
    show(e1);
    show(e2);
    show(e3);
    
    return 0;
}