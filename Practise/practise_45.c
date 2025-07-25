#include <stdio.h>
// A code to swap values of two different variables using functions and pointers
void swap(int *, int *);
void swap(int *number1, int *number2){
    int j=*number1; //The j variable will store the value at address number1
    *number1=*number2;//Here the value at address number 2 is being copied to number1 address
    *number2=j;//Here the value of variable j is being copied to address of number2 
}
int main() {
    int number1=0,number2=0;
    printf("Enter first number\n");
    scanf("%d",&number1);
    printf("Enter second number\n");
    scanf("%d",&number2);
    printf("Before swapping:- Number 1=%d and Number 2=%d\n",number1,number2);
    swap(&number1, &number2);
    printf("After swapping:- Number 1=%d and Number 2=%d\n",number1,number2);
     return 0;
}