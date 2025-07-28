#include <stdio.h>
// A simple code to store the value of multiples of 5 in an array and print it.
int main() {
    int table[10];
    for (int i = 0; i < 10;i++)
    {
        table[i]= 5*(i+1);
        printf("5 X %d = %d \n",i+1,table[i]);
    }
    
     return 0;
}