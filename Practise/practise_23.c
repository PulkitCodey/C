#include <stdio.h>
//Just a normal code to print number given by the user as many times as asked by user in console
int main() {
    int n=0,t=0;// done to remove garbage value
    puts("So want to repeat same number for specific number of times alright");
    printf("Tell me the number:- ");
    scanf("%d",&n);
    printf("How many times you want to print it:- ");
    scanf("%d",&t);
    while(t){
    printf("%d\n",n);
    t--;
    }
     return 0;
}