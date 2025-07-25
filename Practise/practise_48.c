#include <stdio.h>
//Simple program to print the address of a and using address printing the value of a
int main() {
    int a=8;
    printf("The value of a is %p\n",(void*)&a);
    printf("The value of a is %d\n",(void*)*(&a));
     return 0;
}