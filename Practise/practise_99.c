#include <stdio.h>
#include <stdlib.h>
//Simple example of storing integer numbers using calloc
int main() {
    int n=0;// To remove garbage values
    printf("How many numbers you want to store(integer numbers)... \n");
    printf("Enter here\n");
    scanf("%d",&n);
    int *ptr;
    ptr = (int*)calloc(n, sizeof(int));
    if (ptr== NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    printf("Okay store %d floating point numbers now\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",&ptr[i]);
    }
    
     return 0;
}