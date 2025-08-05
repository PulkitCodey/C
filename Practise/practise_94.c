#include <stdio.h>
// A code to write multiplication table of given number by user in a file
int main() {
    int i = 0;
    int num=0;
    printf("Oh which number you want multiplication table of:- ");
    scanf("%d",&num);
    FILE *multiply;
    
    multiply = fopen("feeder_94.txt", "w");
    fprintf(multiply, "%d\n\n",num);//resets file for each output.
    for (; i < 10; i++)
    {
        int times =i+1;
        int product =num*(i+1);
        fprintf(multiply, "%d  x  %d  =  %d\n", num, times, product);
    }
    fclose(multiply);
     return 0;
}