#include <stdio.h>
// A code that ask user how many natual numbers he want to write
int main() {
    int i,n=1;//hardcodded n=1 so that it would start from 1 as natural numbers start from 1
    puts("How many natural numbers do you want to write");
    printf("Input here:- ");
    scanf("%d",&i);
    if (i>0){
    do// This is another loop statement in which whatever written in (do) will run first then the condition will be in (while) checked if its true than it will continue running or else it will stop and won't proceed further but this program will run atleast once 
    {
        printf("%d\n",n);
        n++;
    } while (i>=n);//This is the (while) in which the condition will be checked if its true it will keep running or else it will stop at the very moment
    }
    else{
        puts("Please enter no. bigger than 0 as natural number start from 1");
    }
     return 0;
}