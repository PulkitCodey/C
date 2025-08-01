#include <stdio.h>
// A code to slice out specific part of a paragraph or sentence
void slicer(char *, char *, int, int);
void slicer(char *a, char *b, int c, int d)
{
     int i = 0;
while (c  <= d && a[c] != '\0') {
        b[i++] = a[c++];
    }
    b[i] = '\0';
}

int main()
{
     char input[1000];
     char cutPart[1000];
     char *inputptr = input, *outputptr = cutPart;
     int start = 0, end = 0;
     puts("Want to filter out specific part of your essay. We have got your back just add that paragraph/essay here tell us where to cut from and we will get the work done for you.");
     fgets(input, 1000, stdin);
     puts("Where should we start from and where to end it tell me. Enter it separated by space");
     scanf("%d %d", &start, &end);
     
     slicer(input, cutPart, start , end);
     puts("Here is your sliced part:- ");
     puts(cutPart);
     return 0;
}