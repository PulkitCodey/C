#include <stdio.h>
// A simple factorial calculator
int factorial(int);
int factorial (int n){
    if (n==1 || n==0)// This is base condition that is set so that factorial function will stop once it approaches 0 or 1
    return 1;
    return factorial(n-1)*n;//This is where main factorial is being calculated it will calculate the factorial of number supplied by user
}
int main() {
    int i=0;
    puts("A simple factorial calculator. Supply the number you want fact0rial of and get result");
    scanf("%d",&i);
    int r = factorial(i);
//Printing Result
    printf("The factorial of %d is %d",i ,r);
     return 0;
}