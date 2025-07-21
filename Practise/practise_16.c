#include <stdio.h>
//A program made to make a multiplication table for n number for given number of times
int main() {
     int i=0,t=0;
     puts("Want a multiplication table of any number. Okay.");
     printf("Just tell me the number:- ");
     scanf("%d",&i);
     printf("Till how many times you want to multiply it?");
     scanf("%d",&t);
     printf("The multiplication table of number %d is down below\n",i);
     for (int n = 1; n<=t; n++)
     {
//Result
          printf("%d X %d = %d\n",i,n,i*n);
     }
     
     return 0;
}