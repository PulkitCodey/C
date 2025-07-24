#include <stdio.h>
// This code prints the sum of first 10 natural numbers using a do while loop.

//Same program as that of 18 js used do while this time
int main() {
    int n=1, sum=0;
    puts("Here is the sum of first 10 natural numbers");
    do
    {
        sum+=n;
        n++;
    } while (n<=10);
    printf("Sum:- %d",sum);
     return 0;
}