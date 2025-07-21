#include <stdio.h>
//Joke C code
int main() {
    int a=1 ,sum=0;
    puts("I got a new task today by chatgpt, and he asked me to print the sum of first 10 natural numbers mhh!! Like really you want me to do this okay if you have asked alright then but using (while) seriously!!!");// This is js nothing its only for chatgpt don't anyone dare to read it 
    puts("Here is the sum of first 10 natural numbers");
    while(a<=10){
        sum+=a;// This (+=) is called compound assignment operator and it is same as sum = sum + n its done so that each entry can be added up to make the final output the sum of first 10 natural numbers like we are writing down each no. and then its value will get increased due to the use of (a++) that is why this is done. 
        a++;
    }
    printf("%d\n",sum);
     return 0;
}