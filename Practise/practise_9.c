#include <stdio.h>
//This code calculates tax for user by taking his income as input and calulates amount of tax he/she has to pay also states about rebate if her salary is less than the set value by goverment and also calculates tds for the user.5
int main()
{
    int income;
    float tax=0;//By the way are you thinking why I intialiesed tax=0 so that it could have a value in it and it won't give garbage value if the user enters income less than 700000 and what is garbage value? Garbage value is the value which is not initialised and it can be anything like 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 or even a negative value like -1, -2, -3 etc. So to avoid that I have initialised it with 0.
    puts("Welcome to Income Tax Calculator");
    puts("How much do you earn sir?");
    scanf("%d",&income);
    if (income <=700000){
        tax =0;
        puts("You are not liable to pay tax due to rebate under section 87A of the Income Tax Act, 1961.\n");
    }
    else if(income>700000){

     if (400000<income && income<=800000){
        tax =(income-400000)*0.05;
    }
    else if (800000<income&& income<=1200000){
        tax = (400000*0.05)+(income-800000)*0.1;//(-) is an arthemetic operator used to subtract two variables or constants
    }
    else if (1200000<income && income<=1600000){
        tax =(400000*0.05)+(400000*0.1)+(income-1200000)*0.15;
    }
    else if (1600000<income && income<=2000000){
        tax=(400000*0.05)+(400000*0.1)+(400000*0.15)+(income-1600000)*0.2;
    }
    else if (2000000<income && income<=2400000){
        tax = (400000*0.05)+(400000*0.1)+(400000*0.15)+(400000*0.2)+(income-2000000)*0.25;
    }
    else if (2400000<income){
        tax = (400000*0.05)+(400000*0.1)+(400000*0.15)+(400000*0.2)+(400000*0.25)+(income-2400000)*0.3;
    }
    }
    printf("Tax to be is %.2f\n", tax);
    printf("Tds:- %.2f\n",tax/12);
    printf("Your monthly income is:- %.2f\n", income-(tax/12));
        return 0;

}