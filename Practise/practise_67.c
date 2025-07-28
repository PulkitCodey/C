#include <stdio.h>
// A simple code to store the value of multiples of number in an array and print it of 3 numbers which are given as input by the user.
int main() {
    int table[3][10], number[3];
    printf("What number you want multiplication table of. Enter here seperated by space:-\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&number[i]);
    }
    
    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j]=number[i]*(j+1);
            printf("The table of %d is %d x %d = %d\n",number[i], number[i],j+1,table[i][j]);
        }
        printf("\n");
    }   
    
     return 0;
}