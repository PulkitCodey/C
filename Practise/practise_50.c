#include <stdio.h>
// A code to multiply the values to 10 times using pointers only
void Multiplier(int *);
void Multiplier(int *number1)
{
    *number1 = (*number1 * 10);
}
int main()
{
    int number1=0;
    printf("Enter number:-\n");
    scanf("%d", &number1);
    Multiplier(&number1);
    printf("Ten times of current number is %d\n", number1);
    return 0;
}