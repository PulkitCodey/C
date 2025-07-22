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
        do{
            // n++; it could be placed here also but we need to intialise the value of n=1 then so that checking starts from 2 rather than from 3

            if (i % n == 0) // if it is divisible other than 1 and itself then this will run
            {
                p = 1;
                break; // No need to check further as it is already flaged out and is not divisible
            }
            n++;
        }while (n <= sqrt(i));
    }
    if (p)
        printf("The given number %d is not a prime number\n", i);
    else
        printf("The given number %d is a prime number\n", i);
    return 0;
}