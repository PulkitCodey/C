#include <stdio.h>
// A code that ask user how many natual numbers he want to write using (for) loop
int main() {
    int i,n;
    puts("Wanna write natural number");
    puts("How many:-");
    scanf("%d",&i);
    for (n = 0; n <=i ; n++)
    {
        printf("%d\n",n);
    }
    
     return 0;
}