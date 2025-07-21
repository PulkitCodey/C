#include <stdio.h>

int main() {
    puts("Let's check if the number mentioned is divisible by 97 or not");
    puts("Enter the number to check:\n");
    int no;
    scanf("%d", &no);
    if (no%97==0) //(==) means equal to 0 its not assigning value like that of (=) but checking if it equal or not and % is the modulus operator which is used to find the remainder
    puts("The number is divisible by 97");
    else if (no%97!=0) //(!=) means not equal to 0
    puts("The number is not divisible by 97");
     return 0;
}