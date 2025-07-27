#include <stdio.h>

int main() {
    int S[3]={1,2,3};
    int *ptr =&S;
    printf("The value of S[0] is %d\n", *ptr); //I didn't use &S cause it's understood that this is going to point to S[0].
    printf("The value of S[0] is %d\n", (*ptr+3));
     return 0;
}