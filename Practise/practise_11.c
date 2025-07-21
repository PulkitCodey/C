#include <stdio.h>
//The code is made to find out the highest four digit number among the inputs given by user.
int main() {
    puts("Enter four numbers");
    int n1, n2, n3, n4;
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    int max= n1;
    if(n2>max){
     max = n2;
    }
    if (n3>max){
     max = n3;
    }
    if (n4>max){
     max = n4;
    }
//Result
    printf("The greatest number is %d", max);
     return 0;
}
