#include <stdio.h>

int main() {
    char input[100];
    int i;
    printf("Please input a string:");
    scanf(" %s",input);
    printf("Your input is: %s \n",input);
    printf("Please input a string:");
    for (int i = 0; i < 99; i++)
    {
        scanf(" %c",&input[i]);
    }
    input[i]='\0';
    printf("Your input is: % \n",input);
     return 0;
}