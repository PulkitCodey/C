#include <stdio.h>
//This code shows that the address supplied to function is same as that of one of original and the value is also same of address
void address(int*);
void address(int*a){
    printf("The address of i is %p\n",a);
    printf("The value of i is %d\n",*a);
}
int main() {
    int i=55;
    int *j=&i;
    printf("The address of i is %p\n",&i);
    address(&i);
     return 0;
}