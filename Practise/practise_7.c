#include <stdio.h>

int main() {
    puts("Enter Percentage: ");
    float g;
    scanf("%f",&g);

   /* Here I have used && which is another relational operator which checks if both condition are true or false let me break down what it actually does in code
   
   If the the first condition is 0 that is if its false and also if second condition is also 0 then it will give output as 0 means it won't let code run
   
   If the the first condition is 1 that is if its true and but if second condition is 0 that is its false then it will give output as 0 means it won't let code run
   
   If the the first condition is 1 that is if its true and and if second condition is also 1 then it will give output as 1 means it will let code run
   So basically what all this means is that both the condition should be true to let code run or else it won't run 
   */

    if(g >= 90 && g <= 100){
puts("You have got A grade. EXCELLENT");    // I have used >= and <= which are called relational operators which are used to check if the value is greater than or equal to or less than or equal to the given value
    }

    else if(g >= 80 && g <90){
        puts("You have got B grade. WELL DONE");
    }
    
    else if(g >= 70 && g < 80){
        puts("You have got C grade. GOOD");
    }

    else if(g >= 60 && g < 70){
        puts("You have got D grade. CAN DO BETTER");
    }

    else if(g >= 50 && g < 60){
        puts("You have got E grade. BETTER LUCK NEXT TIME");
    }

    else if(g < 50 && g >=0 ){
        puts("You have got F grade. NEED TO WORK HARD");
    }

    else{
        puts("Invalid Percentage please enter valid percentage from 0 -100 ");
    }
     return 0;
}