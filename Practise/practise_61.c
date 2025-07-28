#include <stdio.h>
// To show that pointer can be used to access array elements.
int main() {
    int S[10]={0,1,2,3,4,5,6,7,8,9};
    int *ptr =S;// I didn't use S[0] cause its understood its going to point to first element of array.
    printf("The value of S[0] is %d\n", *ptr); //I used *ptr to point to S[0] cause ptr is a pointer to int.
    printf("The value of S[0] is %d\n", (*ptr+2)); //I used (*ptr+3) to point to S[0] + 2 cause ptr is a pointer to int.
    printf("The value of S[0] is %d\n", (*ptr+3)); //I used (*ptr+3) to point to S[0] + 3 cause ptr is a pointer to int.
     return 0;
}