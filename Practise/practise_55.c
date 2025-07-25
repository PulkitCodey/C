#include <stdio.h>
//A code to print the marks of user in different subjects
int main() {
    int marks[5];
    puts("Please enter your marks down below");
    for (int input = 0; input < 5; input++)
    {
        scanf("%d",&marks[input]);
    }
    puts("The marks of number of student in their respective subject are given below:-");
    for (int output = 0; output < 5; output++)
    {
        printf("Subject %d is %d\n",output + 1,marks[output]);
    }
    return 0;
}