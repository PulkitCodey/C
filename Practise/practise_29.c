#include <stdio.h>
//  This  code checks if the given number is even or odd but we made use of functions here
int isEven(int x){
    if(x%2==0){// this will check if the value which will be supplied to it in function call is divisble by 2 or not. If it is divisible then value will be returned 1 to isEven
        return 1;
    }
    else{// If not then it will be returned 0
        return 0;
    }
}
void printEvenodd(int x){
if(isEven(x) == 1){//We can't just compare isEven with 1 cause its function and it will return 1 or 0 based on the value supplied to it. So we have to call isEven with x and then compare it with 1
    // If isEven returns 1 then it will print Even else Odd
    printf("Even");
}
    else{
    printf("Odd");
}
}
int main() {
    int i;
    printf("Lets check if the given number is even or odd\n");
    scanf("%d",&i);
    //isEven(i); I commented it out cause it really doing nothing just does the calculation and throws away the value and is storing nothing 
    printEvenodd(i);//No need to specify type like (int)in function call. This is being used to print out the value
     return 0;
}