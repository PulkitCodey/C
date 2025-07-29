#include <stdio.h>
// A program that is going to copy the value of one char array to another
char my_strcpy(char *,char *);
char my_strcpy(char *A, char *B){
 while (*A != '\0')
 {
 *B= *A;
 A++;
 B++;
}
 *B='\0';

}
int main() {
    char Quote[100]={"We're All Living In Each Other's Paranoia."};
    char copiedQuote[100];
    char *cpfrom= Quote;
    char *cpto = copiedQuote;
    my_strcpy(cpfrom,cpto);
    printf("\nThe original quote is %s\n",cpfrom);
    printf("The copied quote is %s\n",cpto);
     return 0;
}