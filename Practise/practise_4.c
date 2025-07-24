#include <stdio.h>
// A simple celsius to fahrenheit converter
int main() {
    puts("Oh having fever huh? But its showing in celsius. Do you want to convert it to fahrenheit? If yes then type Y or else type N");
    char choice; //char is another data type like that of int or float used to store ONE SINGLE CHARACTER in it.
    scanf(" %c", &choice);
    if (choice == 'Y'|| choice =='y' ){ /*That || is called or and its called relational operator when we use it it checks if both of the condition give two it are true false and it works on the basis of truth table which like this
        If condition first gives 0 output or if its false and if condition second is also 0 then the output will be false or it means that it will be 0 and the code written in (if) will not run
        
        If condition first gives 1 output or if its true and if condition second is 0 that is its false then the output will be true or it means that it will be 1 and the code written in (if) will run
        
        If condition first gives 1 output or if its true and if condition second is also 1 then the output will be true or it means that it will be 1 and the code written in (if) will run
        
        */
    float celsius;
    printf("whats the temperature in celsius? ");
    scanf("%f", &celsius);
    printf("The temperature in fahrenheit is %.1f", (celsius*9/5)+32);
    } else if (choice =='N'||choice =='n') {
        printf("No worries I will not convert it have a good day :)");
    }
    return 0;
}