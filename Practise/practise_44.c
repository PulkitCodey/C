#include <stdio.h>
//A simple program to show use of pointers
int main() {
    int i=69;
    int*j= &i;
    printf("The value of i is %d\n",i);// Value  of i
    printf("The address of of i is %p\n",(void*)&i);//Address in hex
    printf("The address of of i is %u\n",&i);//Address in numbers
    printf("The value at pointer j is %d\n",*j);//Value at pointer j which is pointing to variable i
     return 0;
}