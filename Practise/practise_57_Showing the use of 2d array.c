#include <stdio.h>
int display(int arr[][3]);
int display(int arr[][3]){
    return arr[1][1] + arr[2][1];
}
int main() {           //0 1 2
    int student [3][3]={{1,0,0},//0
                        {2,0,0},//1
                        {3,0,0}};//2
    
    for (int i = 0; i < 3; i++)
    {
        printf("Marks in your first subject in Unit Test %d: ", i+1);
        scanf("%d", &student[i][1]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Marks in your Second subject in Unit Test %d: ", i+1);
        scanf("%d", &student[i][2]);
    }
    
    printf("The marks of following students are as follows:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: First subject = %d, Second subject = %d\n", 
               i+1, student[i][1], student[i][2]);
    }
    
    printf("Total marks: %d\n", display(student));
    return 0;
}