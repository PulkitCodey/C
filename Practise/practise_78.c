#include <stdio.h>
#include <string.h>
// To show that a pointer created in struct can't be is readable only and can't be changed again
int main() {
    struct book
    {
        char title[100];
        char *author;
    };
    struct book p1;
    strcpy(p1.title,"C Programming Absolute Beginner's Guide");
    p1.author = "Greg Perry";
    printf("Name of book:- %s and author:- %s\n",p1.title,p1.author);
    // Trying to change the first letter of both title and author
    p1.title[0]='X';
    printf("Name of book:- %s\n",p1.title);
    p1.author[0] = 'X';
    printf("Author name:- %s\n",p1.author);
     return 0;
}