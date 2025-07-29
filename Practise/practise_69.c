#include <stdio.h>
// This is a program to count the number of characters in a string
int my_strlen(char a[]);
int my_strlen(char a[]){
    int b=0;
    while ( a[b]!= '\0' && a[b] != '\n' )// I didn't placed b++ here cause I want it to increase once the loop stars and not also declared and initialised b=0 cause I want it to return value
    {b++;// b is added here to be increased from start.
    }
return b;
}
int main() {
char input[500];// Set to 500 to count large strings
printf("If you want to count a sentence or maybe a word  you can do that here just type the sentence or word and I'll count them for you each character , each space everything just for you.\n");
fgets(input, 500 , stdin);
printf("The number of characters in your sentence/word is %d\n",my_strlen(input));
     return 0;
}