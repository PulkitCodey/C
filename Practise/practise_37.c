#include <stdio.h>
// A simple average calculator
float average(int , int , int);
float average(int a, int b , int c){
    return (a+b+c)/3.0;
}
int main() {
    int input1, input2 , input3;
    puts("Want to find average of three numbers. Alright enter the numbers separated by space");
    scanf("%d %d %d",&input1,&input2,&input3);
    float r = average(input1,input2,input3);
    printf("The average of these three numbers is %.2f",r);
     return 0;
}