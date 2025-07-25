#include <stdio.h>
//A simple program to find 10 times of given number
int result (int);
int result(int a){
   return a*10;
}
int main() {
    int number=0;
    printf("Enter the number you want 10 times of:-");
    scanf("%d",&number);
    printf("The original number is %d\n",number);
    printf("The 10 times of given number is %d\n",result(number));
     return 0;
}