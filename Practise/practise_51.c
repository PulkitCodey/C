#include <stdio.h>
//A code to show that we can print address and show value at that address by taking refrence of another variable
void refrence(int*);
void refrence(int *a){
    printf("The address of i is %p\n",a);
    printf("The value of i is %d\n",*a);
}

int main() {
    int i=8;
    int *j=&i;
    refrence(j);
    return 0;
}