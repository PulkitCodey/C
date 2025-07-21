#include <stdio.h>

int main() {
    int i=0,n=0; //Both of them are intialised to 0 to avoid garbage value
    puts("Oh new task want me to write natural numbers in reverse order");
    puts("Tell me where to start from");
    scanf("%d",&i);
    puts("Okay I am continuing from here");
    //This --n is decrement operator its used so that it will decrease the value of n as I don't want to repeat the same number that is given as input by user
    for (n=--i ;n ;n--)// This is a for loop in which the first part is the initialisation of variable n with i, second part is the condition that will be checked if its true or non-zero number then it will run or else it will stop or (0) and third part is the increment or decrement operator which will run after every iteration of loop and it will run after the loop is ran first means its effect will show from second round of loop. So basically what will happen it will first assign the value of i to n then it will check if condition is true by checking n value then printf will work its magic one time and then decrement operator will decrease the value of i but the assigning task will happen only once and it won't happen again once the for loop is ran.
    {
        printf("%d\n",n);
    }
    
     return 0;
}