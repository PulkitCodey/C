#include <stdio.h>
#include <ctype.h>
// A normal code to check the occurence of given character in a paragraph/Sentence which will be given as input by user
int counter(char[], char);
int counter(char a[], char b)
{
    int j = 0;
    for (int i = 0; a[i] != '\0'; i++) // This a[i]!= '\0' is a helpful statment it helps us to run the code till null terminator is not found and actually lowers the code
    {
        if (tolower(a[i]) == tolower(b))// to lower is used here so that condition will check occurence without being case sensitive.
        {
            j++;
        }
    }
    return j;
}
int main()
{
    char input[1000], character = 0, choice = 0;
    puts("Oh so you wanna check if a character is present in your sentence/paragraph or not.");
    do
    {
        puts("Enter here:-");
        fgets(input, 1000, stdin);
        puts("Which character you are looking for?");
        scanf(" %c", &character);
        int count = counter(input, character);
        if (count == 0)
        {
            puts("There is no match of the character in your paragrah/sentence");
        }
        else
        {
            printf("The number of times character %c has occured %d\n", character, count);
        }
        puts("Want to check again??");
        scanf(" %c", &choice);
        choice = toupper(choice);
        getchar();
    } while (choice == 'Y');
    puts("Press any key to exit...");
    getchar();
    return 0;
}