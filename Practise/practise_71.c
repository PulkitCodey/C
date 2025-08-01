#include <stdio.h>
// A program that is going to copy the value of one char array to another
void reverse(char [],char *, char a);
void reverse(char *A, char *B, char a){ 
 while (*A != a)
 {
 *B= *A;
 A--;
 B++;
}
 *B='\0';

}
int main() {
    char Quote[100]={"We're All Living In Each Other's Paranoia."};
    char breakPoint= Quote[1];
    char copiedQuote[100];
    char *cpfrom= &Quote[99];
    char *cpto = copiedQuote;
    reverse(cpfrom,cpto,breakPoint);
    printf("\nThe original quote is %s\n",cpfrom);
    printf("The copied quote is %s\n",cpto);
     return 0;
}