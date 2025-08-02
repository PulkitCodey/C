#include <stdio.h>
// A code to find the highest payed indiviual in a company
typedef struct Company
    {
        char name[30];
        char emp_id[10];
        float salary;
    }Comp;
    Comp Emp[5];
int highestpaid ();
int highestpaid(){
    int index = 0;
    for (int i = 1; i < 5; i++)
    {
        if(Emp[i].salary>Emp[index].salary)
        index = i;
    }
    
    return index;
    
}
int main() {
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter details for Employee %d\n\n",i+1);
        printf("Enter your name:-\n");
        fgets(Emp[i].name, 30, stdin);
        printf("Enter your code:-\n");
        scanf(" %s",Emp[i].emp_id);// I used scanf cause most of Id's don't have whitespace between them and can be written using scanf and %s
        printf("Enter your salary:-\n");
        scanf(" %f",&Emp[i].salary);
        getchar();
    }
    int richEmp = highestpaid();
    printf("Highest payee of company is %s who earns %.2f P/A\n",Emp[richEmp].name,Emp[richEmp].salary);

    
     return 0;
}