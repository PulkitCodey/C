#include <stdio.h>
//simple n naturl number calculator
int sum(int);
int sum(int number){
    if (number<=0)
    return 0;
    else{ 
        return sum(number-1)+number;
    }
}
int main() {
    int input_number;
    printf("To calculate sum of first n natural numbers, please enter the value of n:");
    scanf("%d",&input_number);
    int result = sum(input_number);
    printf("Sum of first %d natural numbers is %d",input_number,result);
     return 0;
}