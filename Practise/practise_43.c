#include <stdio.h>
//A normal code which prints the address of i
int main() {
    int i;
    int*j= &i;// The j is a interger pointer which is storing the address of i.
    printf("The address of i is %p\n",(int*)&i);//here we are just printing the address of i
    printf("The address of i is %p\n",j);//here we are just printing the address of i. And I didn't add (&) here cause j is pointer which is storing address of j
    printf("The address of j is %p\n",&j);//Its okay that we know that j is storing the address of i but it doesn't mean that j doesn't have its address 
    
     return 0;
}