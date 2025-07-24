#include <stdio.h>
// This code prints the sum of first 10 natural numbers using a for loop.

// Same as the one I did earlier but used for loop this time and completed it pretty fast.
int main() {
    int sum=0;
    puts("Here is the sum of first 10 natural numbers");
    for (int n=1; n<=10; n++)
    {
       sum+=n;
    }
    printf("Sum:- %d",sum);// Did the formatting as you asked chatgpt
    
     return 0;
}