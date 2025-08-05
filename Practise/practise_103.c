#include <stdio.h>
#include <stdlib.h>
// This is code to create an array that can dynamically store 5 integers using malloc() and then reallocate memory size using realloc()
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter 5 numbers to store\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d number is %d \n", i + 1, ptr[i]);
    }
    ptr = realloc(ptr,10*sizeof(int));
    printf("Enter 10 numbers to store\n");
    for (int i = 5; i < 10; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 5; i < 10; i++)
    {
        printf("The value of %d number is %d \n", i + 1, ptr[i]);
    }
    free(ptr);
    return 0;
}