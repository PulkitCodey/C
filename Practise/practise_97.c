#include <stdio.h>
// A code to double the value of integer present in a file
int main()
{
    FILE *multiplier;
    int num;
    multiplier = fopen("feeder_97.txt", "r");
    if (multiplier == NULL)
    {
        printf("File doesn't exist\n");
        return 1;
    }
    fscanf(multiplier, "%d", &num);
    fclose(multiplier);
    multiplier = fopen("feeder_97.txt","w");
    if (multiplier == NULL)
    {
        printf("File doesn't exist\n");
        return 1;
    }
    fprintf(multiplier,"The double of number %d is:- ",num);

    num*=2;
    fprintf(multiplier, "%d", num);
    fclose(multiplier);
    return 0;
}