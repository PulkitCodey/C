#include <stdio.h>
void sum(int *, int *,float*);
void sum(int *a, int *b, float *result)
{
    *result= *a+*b;
}
void average(int *a, int *b,float*);
void average(int *a, int *b,float *result)
{
    *result= (*a+*b)/2.0;
}
int main()
{
    int number1 = 0, number2 = 0;
    float result=0;
    int choice = 0;
    printf("Enter the two numbers separated by space:- ");
    scanf("%d %d",&number1,&number2);
    printf("What you wannna do sum or take average of these two. Type  1 for sum and 2 for average\n");
    scanf(" %d", &choice);
    switch (choice)
    {
        case 1:
        sum(&number1,&number2,&result);
        printf("Sum of these two numbers are:- %.2f\n", result);
        break;
        case 2:
        average(&number1,&number2,&result);
        printf("Average of these two numbers are:- %.2f\n", result);
        break;
        default:
        printf("Wrong choice made!!! Quitting\n");
        break;
        }
        return 0;
    }
