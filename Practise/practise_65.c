#include <stdio.h>
int i=0;
int number[5]={-2,5,3,1,-9};
void counter();
void counter(){
    while (1){
        if (number[i]>0){
            printf("%d is positive number.\n",number[i]);
            i++;
        }
        else if (number[i]<0){
            printf("%d is negative number.\n",number[i]);
          
        }
        else{
            printf("%d is zero.\n",number[i]);
        }
    }
    
} 
int main() {
    counter();
     return 0;
}

