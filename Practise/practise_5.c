#include <stdio.h>
// Simple interest and Compound interest calculator
#include <math.h>
// math.h is included to use the pow function (power adding operator like x to the power z) for compound interest calculation its js same as like that of stdio and use to include math operators which stdio doesn't support
int main() {
    puts("Seems like you want to calculate Simple Interest. Alright let's do it. Enter the principal amount, rate of interest and time period in years.");
    float p, r;
    int t, n;
    puts("Enter the principal amount:");
    scanf("%f", &p);
    puts("Enter the rate of interest:");
    scanf("%f", &r);
    puts("Enter the time period in years:");
    scanf("%d", &t);
    float sI =(p*r*t)/100;// That (/) is also an arthmetic operator
    printf("The simple interest is: %.3f\n\n",sI);
    printf("The total amount after interest is: %.3f\n", p + sI);
    puts("Not satisfied want compound interest also. Type 1 in yes or 2 for no. ");
    int choice;
    scanf("%d",&choice);
    if (choice==1){
        puts("Then tell me number of times interest will be compounded per year. For yearly = 1 for monthly = 12, for quarterly = 4, for half yearly = 2 and for daily = 365");
        scanf("%d",&n);
        float cI = p * pow(1 + r/(n*100), n*t) - p;// Here I have used pow function which is used to add power to function. By the way do you know what's the formula of compound interest? You don't, its okay here's the link go and check https://en.wikipedia.org/wiki/Compound_interest we have divided r by 100 cause most of users will enter rate like 9% or 10% like 9 or 10 so to convert it in percentage we have to divide it by 100.
        printf("Here is the compound interest %.3f\n",cI);
        printf("The total amount after interest is: %.3f\n", p + cI);
   } else if (choice ==2)
   {
    puts("No worries not even going to do that.");
   }
   else {
    puts("Invalid choice made!!! Type 1 or 2 [Closing program]");
   }
     return 0;
}