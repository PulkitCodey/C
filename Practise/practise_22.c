#include <stdio.h>
// This code is made to find out the factorial of the number given by user 
int main() {
    int i,n;
    puts("Want factorial of the number that you will give me. Alright");
    printf("Tell me the number:- ");
    scanf("%d",&i);
    if(i==0)// I didn't used {} but its not a good practise I am just flexing out 
    puts("The factorial of 0 is 1");
    for (int f=1,n=i;i ; i--)
    {
        f*=i; // f=f*i when next time loop run f(previous value)*i=f(new value)
        if(i==1)// Same here I didn't use {}. We can only do this if there is only single block of code to be run inside (if)
        printf("The factorial of given number %d is %d",n,f);
    }
    
     return 0;
}