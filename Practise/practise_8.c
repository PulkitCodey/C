#include <stdio.h>

int main()
{
    // Asking marks from user in each subject
    puts("Enter your marks in each subject out of 70");
    float marks1, marks2, marks3, marks4, marks5;
    puts("Enter your marks in subject 1:\t");// \t is another escape operator used to add a tab space or 5 spacebar in line 
    scanf("%f", &marks1);
    puts("Enter your marks in subject 2:\t");
    scanf("%f", &marks2);
    puts("Enter your marks in subject 3:\t");
    scanf("%f", &marks3);
    puts("Enter your marks in subject 4:\t");
    scanf("%f", &marks4);
    puts("Enter your marks in subject 5:\t");
    scanf("%f", &marks5);
    // Caluculation of percentage in each subject where each subject marks in 70
    float p1 = (marks1 / 70) * 100;
    float p2 = (marks2 / 70) * 100;
    float p3 = (marks3 / 70) * 100;
    float p4 = (marks4 / 70) * 100;
    float p5 = (marks5 / 70) * 100;
    // Error checker
    if (p1 < 0 || p1 > 100 || p2 < 0 || p2 > 100 || p3 < 0 || p3 > 100 || p4 < 0 || p4 > 100 || p5 < 0 || p5 > 100)// these (<,>) are called relational operators which are used to check if the value is less than or greater than the given value
    {
        puts("Invalid marks entered please enter valid marks");
        return 0;
//For Passing condition
    }
    if (p1 >= 33 && p2 >= 33 && p3 >= 33 && p4 >= 33 && p5 >= 33)
    {
        printf("You have passed in all subjects with percentage  \n subject 1:%.2f\n subject 2:%.2f\n subject 3 :%.2f\n subject 4 : %.2f\n subject 5 :%.2f", p1 , p2 , p3 ,p4 ,p5);
    }
//For Failing condition in one or more subject
    else if (p1 < 33 || p2 < 33 || p3 < 33 || p4 < 33 || p5 < 33)
    {
        puts("You have failed in one or more subjects");
        if (p1 < 33)
        {
            printf("You have failed in subject 1 with %.2f%%\n", p1);
        }
        else
        {
            printf("You have passed in subject 1 with %.2f%%\n", p1);
        }
        if (p2 < 33)
        {
            printf("You have failed in subject 2 with %.2f%%\n", p2);
        }
        else
        {
            printf("You have passed in subject 2 with %.2f%%\n", p2);
        }
        if (p3 < 33)
        {
            printf("You have failed in subject 3 with %.2f%%\n", p3);
        }
        else
        {
            printf("You have passed in subject 3 with %.2f%%\n", p3);
        }
        if (p4 < 33)
        {
            printf("You have failed in subject 4 with %.2f%%\n", p4);
        }
        else
        {
            printf("You have passed in subject 4 with %.2f%%\n", p4);
        }
        if (p5 < 33)
        {
            printf("You have failed in subject 5 with %.2f%%\n", p5);
        }
        else
        {
            printf("You have passed in subject 5 with %.2f%%\n", p5);
        }
    }
//Final Score
    float t = (p1 +p2 +p3 +p4 +p5)/5;
    printf("Your overall percentage is %.2f", t);
    return 0;
}