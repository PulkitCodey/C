#include <stdio.h>
// A normal program to show the use of arthmetic pointer to jump to next value in array
int main() {
    int number[]={1,2,3,4,5,6,7,8,9,10};//note this is array and in this numbers are being stored from number[0]  number[9]
    int *ptr=&number[0];//or we can use int *ptr =  marks;
    printf("Before changing ptr %lu\n",ptr);
    ptr+=2;
    /*
    number[] array:[1]   [2]   [3]   [4]  ...
                    ^     ^     ^
                    |     |     |
                   ptr  ptr+1 ptr+2

    */
    printf("After changing ptr %lu\n",ptr);
     return 0;
}