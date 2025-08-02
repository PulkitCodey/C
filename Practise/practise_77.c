#include <stdio.h>
#include <string.h>
//A code to show example of struct and how to use it
int main() {
struct employee
{
    char name[10];
    int code;
    float salary;
};
    struct employee e1;
        strcpy(e1.name, "Pulkit");
        e1.code = 45;
        e1.salary = 850000;
    printf("Name %s code %d salary %.2f\n",e1.name,e1.code,e1.salary);
    return 0;
}