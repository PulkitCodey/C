#include <stdio.h>
// Use of single and double pointer
int main() {
    int i = 24;
    int *j = &i;//This is integer pointer pointing at address of i
    int **k = &j;//This seems like we are routing through proxies in tor network each hitting new ip address but its js pointer k is pointing to address of j
    printf("The value at variable i is %d\n",i);
    printf("The value at variable i is %d\n",*(&i));//This *(&i) means that at address i (&i) what value is stored *(&i) print it to console in interger format  
    printf("The value at variable i is %d\n",*j);
    printf("The value at variable i is %d\n",**k);
    printf("The address of variable i is%p\n",(void*)&i);
    printf("The address of variable i is%p\n",*j);
    printf("The address of variable i is%p\n",**k);
    return 0;
}