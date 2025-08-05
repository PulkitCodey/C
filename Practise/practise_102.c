#include <stdio.h>
#include <stdlib.h>
// This is code to create an array that can dynamically store 6 integers using calloc()

int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter 6 numbers to store\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d number is %d \n", i + 1, ptr[i]);
    }
    return 0;
}