#include <stdio.h>
#include <ctype.h>
int table[10], number=0;
void reverse(int table[]);
void reverse(int table[]){
    for (int i = 10; i; i--)
    { 
        printf("%d X %d = %d \n",number,i,table[i-1]);// I did i - 1 here cause array store numbers from 9-0.
    }
    
}
// A simple code to store the value of multiples of 5 in an array and print it.
int main() {
    char choice;
    printf("What number you want multiplication table of. Enter here:-\n");
    scanf("%d",&number);
    for (int i = 0; i < 10;i++)
    {
        table[i]= number*(i+1);
        printf("%d X %d = %d \n",number,i+1,table[i]);
    }
    printf("Want a reverse table (Y/N)\n");
    scanf(" %c",&choice);
    choice = toupper(choice);
    if (choice == 'Y')
    {
        reverse(table);
    }
    else{
        printf("No problem...\n");
    }
     return 0;
}