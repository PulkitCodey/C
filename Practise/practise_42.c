#include <stdio.h>
// Function to calculate Fibonacci number at position n

/*
By the way what fibonacci series is a series in which each number is the sum of two preceding number, starting from 0 and 1.

Position:-0,1,2,3,[4],5,6,7,8,9,10,...
Value:-   0,1,1,2,[3],5,8,13,21,34,....
so if we take example for 3 its is sum of two preceding numbers 2 + 1 but it is positioned at 4 position in the series so if we want to calculate what we will do just keep calling our function Fibonacci and what it is doing its just summing up all those calls till base condition met. Here is what happening under the hoods

Base condition fibonacci(2)=1, fibonacci(1)=1, fibonacci(0)=0

#### Goal to find fibonacci(6) or number at 6 position####
fibonacci(5)+fibonacci(4)
fibonacci(4)+fibonacci(3)+fibonacci(3)+fibonacci(2)
fibonacci(3)+fibonacci(2)+fibonacci(2)+fibonacci(1)+fibonacci(2)+fibonacci(1)+fibonacci(2)
fibonacci(2)+fibonacci(1)+fibonacci(2)+fibonacci(2)+fibonacci(1)+fibonacci(2)+fibonacci(1)+fibonacci(2)
1+1+1+1+1+1+1+1=8
Note: That we are keeping all the calls in stack and when we reach base condition we will return the value and then we will keep adding all those values to get the final answer.
*/
int Fibonacci(int);
int Fibonacci(int n){
    if (n==0)//base condition
    return 0;
    else if (n==1 || n==2)//base condition
    return 1;
    else
    return Fibonacci(n-1)+Fibonacci(n-2);//Main logic of fibonacci series
}
int main() {
    int n;
    printf("Enter the position of the Fibonacci sequence: ");
    scanf("%d", &n);
    printf("Fibonacci number at position %d is %d\n", n, Fibonacci(n));
    return 0;
}