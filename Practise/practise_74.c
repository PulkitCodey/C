#include <stdio.h>
#include <ctype.h>
#include <string.h>
//String Encrypter by increasing its ascii value.
void Display();
void Encrypter(char[]);
void Decrypter(char[]);

void Display(){
    puts("Simple Text Encrypter & Decrypter. Choose from (1,2,3)\n"
    "1. Encrypt\n"
    "2. Decrypt\n"
    "3. Exit");
}

void Encrypter(char a[]){
    for (int ascii=0, i=0; a[i] != '\0' ;i++)
    {
    ascii = a[i];
    if (isspace(ascii))//This is done to skip changing ascii value of whitespaces (isspace) will give non zero if there is space present in the string and zero if there isn't.
    {
     continue;
    }
    
    a [i]++;//a[i] = ascii +1 this can also be used as it is just going to change the value of a[i] by increasing its value by 1
    }
    printf("The encrypted string is %s\n",a);
}
void Decrypter(char a[]){
    for (int ascii=0, i=0; a[i] != '\0' ;i++)
    {
    ascii = a[i];
    if (isspace(ascii))// This is done to skip changing ascii value of whitespaces (isspace) will give non zero if there is space present in the string and zero if there isn't.
    {
     continue;
    }
    
    a[i]--;//a[i] = ascii -1 this can also be used as it is just going to change the value of a[i] by decreasing its value by 1
    }
    printf("The decrypted string is %s\n",a);
}
int main() {
    char text[1000];
    int choice = 0, length = 0 ;
    Display();
    scanf(" %d",&choice);
    getchar();
    switch (choice)
    {
    case 1:
    puts("Enter text to encrypt");
    fgets(text, 1000 , stdin);
    length=strlen(text);
    printf("Number of characters to encrypt:- %d\n",length);
    Encrypter(text);
    puts("Press any key to exit...");
    getchar();
    break;
    case 2:
    puts("Enter text to decrypt");
    fgets(text, 1000 , stdin);
    length=strlen(text);
    printf("Number of characters to decrypt:- %d\n",length);
    Decrypter(text);
    puts("Press any key to exit...");
    getchar();
    break;
    case 3:
    puts("Exiting!!!");
    break;
    default:
    puts("Wrong choice mad!!! Quiting");
    break;
    }
return 0;    
    
}