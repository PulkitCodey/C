#include <stdio.h>
#include <string.h>
// To show the use of (->) operator in c language.
int main() {
    typedef struct Employees
    {
        char Name[20];
        char code[10];
        float salary;
        char add[100];
        char dob[20];
    }Emp;
    Emp e;
    Emp *e1= &e;
    strcpy(e1->Name,"Elliot Alderson");
    strcpy(e1->code,"ER280652");
    e1->salary = 900000;
    strcpy(e1->add,"217 East Broadway, New York, NY 10002, USA");
    strcpy(e1->dob ,"17/09/1986");

printf("Name %s\n",e1->Name);
printf("Emp_Code %s\n",e1->code);
printf("Salary $%.2f\n",e1->salary);
printf("Address %s\n",e1->add);
printf("Date of Birth %s\n",e1->dob);

return 0;
}