#include <stdio.h>
// Function to calculate Fibonacci number at position n

/*
By the way what fibonacci series is a series in which each number is the sum of two preceding number, starting from 0 and 1.
0,1,1,2,[3],5,8,13,21,34,....
so if we take example for 3 its is sum of two preceding numbers 2 + 1 but it is positioned at 4 position int the series so if we want to calculate what we will do just keep calling our function Fibonacci and what it is doing its just summing up one number less from its position and two numbers less that its position so if we want to find out fibonacci number at positon 5 what will do 

*/
int Fibonacci(int);
int Fibonacci(int n){
    if (n==0)
    return 0;
    else if (n==1 || n==2)
    return 1;
    else
    return Fibonacci(n-1)+Fibonacci(n-2);
}
int main() {
    int n;
    printf("Enter the position of the Fibonacci sequence: ");
    scanf("%d", &n);
    printf("Fibonacci number at position %d is %d\n", n, Fibonacci(n));
    return 0;
}