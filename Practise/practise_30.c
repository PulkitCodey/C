#include <stdio.h>
// Simple program to print the sum of two numbers but this time using functions
void greetUser(){// The void function is used when you don't want to return value. Its generally used to print msg in console and using functions makes thing pretty easier as we can call out for same funtion as many times as needed to make use of them.
    puts("Welcome to the Addition Program!");
}
int add(int a, int b){// int funtion is integer funtion and we have to add return in it so that it can return value back to function. Apart from int there are many more like float, char and many more. They are generally used to do math and to assign the value of result to another cause these ones store value of the result
    return a+b;// I have defined and also made prototype in same block of code but it's not recommended cause there are times when we have to call for a function outside the main block and as C language process code from up to down it will throw error msg if we not define it again after main block
}

int main() {
    int i1, i2;
    greetUser();//Here we call greetUser to print (Welcome to the Addition Program) in console
    puts("Enter two numbers two print");
    scanf("%d",&i1);
    scanf("%d",&i2);
    int r =add(i1,i2);// I made use of int funtion which is named with r to make use of it to print two numbers i1 and i2
    printf("The sum of two numbers is %d",r);
     return 0;
}