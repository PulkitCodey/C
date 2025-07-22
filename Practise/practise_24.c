#include <stdio.h>
// This is the code to find out if the number given by user is prime or not
int main()
{
    int i = 0, p = 0;// To remove garbage value
    puts("So you wanna check if the given number is prime or not alright");
    printf("Just tell me the number:- \n");
    scanf("%d", &i);
    if (i <= 1)// if input is given less than 1 it is not a prime number
        p = 1;
    else
    {
        for (int n = 2; n < i; n++)// This will check till one number before the input number cause the given number will be divisible by itself
        /*
        10
        2 x 6 = 12
        3 x 4 =12
        4 X 3 = 12
        6 X 2 = 12
        ####7 X 2 = 14

        */
        {
            if (i % n == 0)// if it is divisible other than 1 and itself then this will run
            {
                p = 1;
                break; // No need to check further as it is already flaged out and is not divisible
            }
        }
    }
    if (p)
        printf("The given number %d is not a prime number", i);
    else
        printf("The given number %d is a prime number", i);
    return 0;
}