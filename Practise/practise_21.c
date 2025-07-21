#include <stdio.h>
//A program made to make a multiplication table for n number for given number of times and also to add the products that we obtain in multiplication table
int main() {
     int i=0,t=0,m=0,s=0;
     puts("Want a multiplication table of any number. Okay.");
     printf("Just tell me the number:- ");
     scanf("%d",&i);
     printf("Till how many times you want to multiply it?");
     scanf("%d",&t);
     printf("The multiplication table of number %d is down below\n",i);
     for (int n = 1; n<=t; n++)
     {
//Multiplication and printing of table 
          printf("%d X %d = %d\n",i,n,m=i*n);
          s+=m;
     }
// Summing up the products
     printf("Sum of that products of those multiplication",s);
     
     return 0;
}