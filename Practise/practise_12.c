#include <stdio.h>
//Code made to write natural numbers from 10 to 20
int main() {
    int a=0;
    puts("The natural numbers from 10 to 20 are:-");
    while(1){ // Here (while) is a loop and it only works if the condition is true if the condition turn out to be false it won't work and to make it true I gave it non zero value which is 1 here
        a++;// this is increment operator what it does it just increases the value of assigned variable like here it will increase the value of a to 1 from 0 as I have hardcoded it earlier
            if(a>=10 && a<=20){
                printf("%d ",a);
                if (a==20){
                    break;// This (break) is a loop control statement that terminates the loop so once the condition in if mets it will run the code and stops the loop
                }
        }
    }
    return 0;
}