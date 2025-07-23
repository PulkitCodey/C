#include <stdio.h>
// A simple program to count digits in an integer
void display(){
    puts("Digit counter");
}
int main() {
    int i=0, no_of_digits=0;
    display();
    printf("Oh there are enormous amount of digits in your number, No problem I will count them for you just enter the number here:-\n");
    scanf("%d",&i);
    if (i<0)
    {
        i=-i;// This is done so that it could handle negative values too
    }
    if (i==0)//Handles 0 
    {
        no_of_digits++;
    }
    else{
        while (i!=0)// Make it run till I become 0
        {
            i/=10;//This is comprehend like i= i/10 and basically what is happening is that when it gets divided the decimal point shift one digit to left but this variable i is declared as int means integer so as the floating value comes it get ignored and only 3 digits are left in our number and the process will keep on going till i becomes 0
            no_of_digits++;
        }
        
    }
    printf("There is/are total %d number of digits in your number",no_of_digits);
     return 0;
}