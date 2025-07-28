#include <stdio.h>
// A simple code to store the value of multiples of number in an array and print it and number is given as input by user.
int main() {
    int table[10], number=0;
    printf("What number you want multiplication table of. Enter here:-\n");
    scanf("%d",&number);
    for (int i = 0; i < 10;i++)
    {
        table[i]= number*(i+1);
        printf("%d X %d = %d \n",number,i+1,table[i]);
    }   
    
     return 0;
}