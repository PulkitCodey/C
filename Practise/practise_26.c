#include <stdio.h>
#include <math.h>
// This is the code to find out if the number given by user is prime or not using while
int main()
{
    int i = 0, p = 0, n = 2; // To remove garbage value
    puts("So you wanna check if the given number is prime or not alright");
    printf("Just tell me the number:- \n");
    scanf("%d", &i);
    if (i <= 1) // if input is given less than 1 it is not a prime number
        p = 1;
    else
    {
        while (n <= sqrt(i))
        {
            n++;
            if (i % n == 0) // if it is divisible other than 1 and itself then this will run
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