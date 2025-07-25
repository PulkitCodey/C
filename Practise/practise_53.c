#include <stdio.h>
//A simple program to print the values of variable i by using pointer to pointer type of variable
int main() {
    int i=14;
    int *j= &i;
    int **k =&j;
    printf("The value of i is %d\n",**k);
     return 0;
}