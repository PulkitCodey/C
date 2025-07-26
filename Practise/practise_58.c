#include <stdio.h>
// A super sleek code to print the greatest of five numbers
int main() {
    int input[5];
    printf("Please input five numbers:\n");
    for (int i = 0; i < 5; i++)
    scanf("%d",&input[i]);//Taking input from user using for loop
    int greatest = input[0];
    for (int j = 0; j < 5 ; j++)
    {//This loop keeps increasing the value of j and checks if the value is greater than the greatest number
        if (input[j]>greatest)
            greatest = input[j];
    }
    //Result
    printf("The greatest number is %d\n",greatest);
    
    return 0;
    }