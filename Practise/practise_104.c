#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// This is code to make a multiplication table by prompting user to enter the number he/she want table of which prints table from 1 to 10 then user has chance to even proceed it further to print even longer.
int main()
{
    int limit = 10, n = 0;
    char choice;
    int *ptr;
    ptr = (int *)calloc(limit, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter the number you want multiplication table of:- \n");
    scanf("%d", &n);
    for (int i = 0; i < limit; i++)
    {
        ptr[i] = n * (i + 1);
        printf(" %d X %d = %d\n", n, i + 1, ptr[i]);
    }
    printf("Want even longer tell me how long it should be:- \n");
    do
    {
        scanf("%d", &limit);
        ptr = realloc(ptr, limit * sizeof(int));
        if (ptr == NULL)
        {
            printf("Memory reallocation failed\n");
            return 1;
        }
        for (int i = 10; i < limit; i++)
        {
            ptr[i] = n * (i + 1);
            printf(" %d X %d = %d\n", n, i + 1, ptr[i]);
        }
        printf("Is this fine or want even long(Y/N)\n");
        scanf(" %c", &choice);
        choice = toupper(choice);
    } while (choice == 'Y');

    free(ptr);
    return 0;
}