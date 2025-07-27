#include <stdio.h>

int main() {
    int student[3][3][3];
    printf("Lets find the total of your marks and also take average of it.\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Enter marks of student %d in subject %d and unit test %d: ", i+1, j+1, k+1);
                scanf("%d", &student[i][j][k]);
            }
        }
    }
    //The above condition seeems complicated but its not the way you think of it. Just think of it as a book and each book has marks of student so when first loop starts as there is nothing to print in console it will proceed further and enters in loop second now as the loop second as has nothing really to print it will enter third loop then in third there come the option to enter marks for each subject as I have intialised each i , j , k equal to 1 so first it will print the value of i and then value of j which is 1 also k which is 1 when user enters the value then increment operator will increase the value of k  then condition of 3rd loop is checked if it correct then again the user has to enter the value of unit test 2 again increment operator will increase the value of k and again loop will run now once user enters the value increment operator increases the value of k but condition will become false this time and so we will jump back to second loop value of j is increased by 1 means we are taking input for subject 2 now then again third loop will run same process will happen and once third loop become false again it will again increase the value of second loop and once second loop also become false then we will jump back to first loop and value of i will be increase by 1 and now we are taking inputs for second student and this will keep going on.

    //Now we will print total marks of each student in each subject
    int total[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            total[i][j] = student[i][j][0] + student[i][j][1] + student[i][j][2];
        }//What this is doing it is just increasing the value of j and k and then adding the marks of each subject from subject 1 to 3.
    }
    //Now we will print the total marks of each student in each subject
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Total marks of student %d in subject %d is %d\n", i+1, j+1, total[i][j]);
        }
    }
    //Now we will take average of each student in each subject.
    float average[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            average[i][j] = total[i][j] / 3.0;
        }
    }
    //Now we will print the average of each student in each subject.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Average marks of student %d in subject %d is %f\n", i+1, j+1, average[i][j]);
        }
    }
     return 0;
}