#include <stdio.h>

int main() {
    int array[3][3][3] = {
        // First 3x3 matrix (layer 0)
        {{1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}},
        // Second 3x3 matrix (layer 1)
        {{10, 11, 12},
         {13, 14, 15},
         {16, 17, 18}},
        // Third 3x3 matrix (layer 2)
        {{19, 20, 21},
         {22, 23, 24},
         {25, 26, 27}}
    };

    printf("3D Array Visualization:\n\n");
    
    for (int i = 0; i < 3; i++) {
        printf("Layer %d:\n", i);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%2d ", array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
        printf("Layer %d:\n", i);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%2p ", array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}