#include <stdio.h>
// A example to show the use of %c and %s specifier
int main() {
    char test[]={"why you think we did this there is a reason behind every thing"};
    for (int i = 0; i < 61; i++)
    {
        printf("%c",test[i]);// This is going to print each word of the string if /n added a last it will print them in new line cause %c is a character specifier
    }
    printf("\n");
    printf("%s\n",test);// While this is also going to print the same string but I made use of %s which is string specifier and it will be going to print whole string at once
    printf("What you say about it\n");
    scanf("%s",test);
     return 0;
}