#include <stdio.h>
#include <string.h>
// An example to show use of arrays in struct
int main() {
    struct Student
    {
        char name[10];
        int marks[5];
    };
    struct Student Class_9[5];
    strcpy(Class_9[0].name,"Elliot");
    Class_9[0].marks[0] = 99;
    Class_9[0].marks[1] = 100;
    Class_9[0].marks[2] = 98;
    Class_9[0].marks[3] = 97;
    Class_9[0].marks[4] = 96;
    strcpy(Class_9[1].name,"Pulkit");
    Class_9[1].marks[0] = 99;
    Class_9[1].marks[1] = 100;
    Class_9[1].marks[2] = 98;
    Class_9[1].marks[3] = 97;
    Class_9[1].marks[4] = 96;
    strcpy(Class_9[2].name,"Red");
    Class_9[2].marks[0] = 99;
    Class_9[2].marks[1] = 100;
    Class_9[2].marks[2] = 98;
    Class_9[2].marks[3] = 97;
    Class_9[2].marks[4] = 96;
    for (int i = 0; i<3 ; i++)
    {
        int average = 0 ;
        printf("Average Marks of %s\n",Class_9[i].name);
        for (int j = 0; j < 5; j++)
        {
        average+=Class_9[i].marks[j];
        }
        printf("%.2f\n\n",average/5.0);
    }
    
    return 0;
}