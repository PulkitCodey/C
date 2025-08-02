#include <stdio.h>
#include <string.h>
int main()
// This code compares if the two words are equal or not
{
    char input1[100], input2[100], ch;
    int i=0;
    printf("Enter sentence here:");
    fgets(input1, 100, stdin);
    while ((ch = getchar()) != '\n');
    printf("Enter another sentence to compare with:-");
    while ((ch = getchar()) != '\n' && i < 99)
    {
        input2[i++] = ch;
    }
    input2[i] = '\0';

    int compare = strcmp(input1, input2);
    if (compare == 0)
    {
        puts("Both inputs are equal");
    }
    else
    {
        puts("Inputs are not equal");
    }
    return 0;
}