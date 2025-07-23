#include <stdio.h>

int main() {
    puts("Hmm new task for me want to write the whole multiplication table backwards fine");
    int i=0, t=0;// This is done to remove garbage value
    printf("Just tell me the number of which you want multiplication table of:- ");
     scanf("%d",&i);
     printf("Till how many times you want to multiply it?");
     scanf("%d",&t);
     printf("The multiplication table of number %d is down below in backwards\n",i);
     for ( ; t ; t--)// No initiastion and declaration is done here as it is not even needed 
     {
//Result
          printf("%d X %d = %d\n",i,t,i*t);
     }
     return 0;
}