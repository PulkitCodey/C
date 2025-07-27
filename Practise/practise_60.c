#include <stdio.h>

int main() {
    int marksStudent1[3][3];
    int marksStudent2[3][3];
    int marksStudent3[3][3];
    
    printf("Enter marks for Student 1:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Please enter marks in subject %d in unit test %d: ", i+1, j+1);
            scanf("%d", &marksStudent1[i][j]);
        }
    }
    
    printf("\nEnter marks for Student 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Please enter marks in subject %d in unit test %d: ", i+1, j+1);
            scanf("%d", &marksStudent2[i][j]);
        }
    }
    
    printf("\nEnter marks for Student 3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Please enter marks in subject %d in unit test %d: ", i+1, j+1);
            scanf("%d", &marksStudent3[i][j]);
        }
    }

    printf("\nResults:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int total = marksStudent1[i][j] + marksStudent2[i][j] + marksStudent3[i][j];
            float average = total / 3.0;
            printf("Subject %d, Unit Test %d:\n", i+1, j+1);
            printf("Total marks: %d\n", total);
            printf("Average marks: %.2f\n\n", average);
        }
    }
    return 0;
}