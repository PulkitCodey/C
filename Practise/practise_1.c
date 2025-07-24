// This program calculates area of rectangle of hardcoded length and breadth values

#include <stdio.h> //#include<stdio.h> is asking machine to use standard c operator cause we are going to need it in our code

int main()//This is main operator in which everything is included its must in C language to start your code
 {
    int length = 5, breadth = 10;
    // In this I have declared and intialised the length with value 5 in memory same goes for breath which has value of 10 
    printf("The area of rectangle is %d\n", length * breadth); //printf is used to print things on console. We can use arthemetic operators, format specifier, variables, constants, and escaped characters in it.
     //That * is arthmetic operator used to multiply two variables or constant
    printf("The perimeter of rectangle is %d\n", 2 * (length + breadth)); //That + is also arthmetic operator used to add two different variables or constants
    //That (%) before d in %d is format specifier that in which format do you want printf to print it in console and d stands for decimal
     return 0; //return 0 is used to send signal to machine that code ran succesfully
}