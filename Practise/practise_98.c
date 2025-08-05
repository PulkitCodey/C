#include <stdio.h>
#include <stdlib.h>
//Simple example of storing floating point numbers using memory allocation
int main() {
    int n=0;// To remove garbage values
    printf("How many numbers you want to store(decimal numbers)... \n");
    printf("Enter here:- \n");
    scanf("%d",&n);
    
    float *ptr;
    ptr = ( float* ) malloc (n * sizeof(float));
    if(ptr==NULL){
        printf("Memory allocation failed!!! \n");
        return 1;
    }
    printf("Okay store %d floating point numbers now\n",n);
    //Storing values in pointer now
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&ptr[i]);
    }
    //Printing stored values
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d number %.2f\n",i+1, ptr[i]);
    }
    free(ptr);
     return 0;
}