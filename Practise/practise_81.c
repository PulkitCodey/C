
#include <stdio.h>
// A three-dimensional vector using structures
int main()
{
    char cord;
    typedef struct Vector
    {
        float x;
        float y;
        float z;
    } Vector;
    Vector matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        cord = 'x' + i;// Here we made use of ascii value x ascii value is 120 and adding up 0 to it makes it 120 and if we try to print it it will print as x using %c and if we add 1 to 120 then it will print y and so on.
        printf("Enter all values of %c coordinate:- \n", cord);
        for (int j = 0; j < 3; j++)
        {
            if (cord == 'x')
                scanf("%f", &matrix[i][j].x);
            if (cord == 'y')
                scanf("%f", &matrix[i][j].y);
            if (cord == 'z')
                scanf("%f", &matrix[i][j].z);
        }
        printf("\n");
    }
        printf("\nFinal Vector Data:\n");
    for (int j = 0; j < 3; j++) {
        printf("Vector[%d] = (%.2f, %.2f, %.2f)\n",
            j,
            matrix[0][j].x,
            matrix[1][j].y,
            matrix[2][j].z);
    }
    return 0;
}