#include <stdio.h>
// A normal code to check the occurence of given character in a paragraph/Sentence which will be given as input by user 
int counter(char [], char );
int counter(char a[], char b){
    int j=0;
for (int i = 0; a[i]!= '\0'; i++)// This a[i]!= '\0' is a helpful statment it helps us to run the code till null terminator is not found and actually lowers the code
{   if (a[i]== b)
    {
    j++;
    }
}
return j;
}
int main() {
    char input[1000], character = 0;
    puts("Oh so you wanna check how many times a given character occured in your sentence/paragraph.");
    puts("Enter here:-");
    fgets(input, 1000, stdin);
    puts("Which character you are looking for?");
    scanf(" %c",&character);
    int count = counter(input,character);
    printf("The number of given character %c is/are %d\n",character, count);
     return 0;
}