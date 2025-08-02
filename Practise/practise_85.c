#include <stdio.h>
// A code to find the goat of class just joking highest scorer of class
typedef struct School
    {
        char name[15];
        int roll;
        float marks;
    }Student;
    Student class_9[3];
float Goatofclass ();
float Goatofclass(){
    int topper = 0;// Here I made another variable topper firstly declared it 0 cause ofc want to remove the garabage value
    for (int i = 1; i < 3; i++)
    {
        if(class_9[i].marks>class_9[topper].marks)// Here we are just checking condition on by using topper as index when the code first runs it will put index 0 as the topper/Goat then 0 will be set will be assigned to topper if any another student have more marks then student 1 then his index will be assigned to topper
        topper = i;
    }
    
    return topper;//This is just returning i means index of topper student
    
}
int main() {
    
    for (int i = 0; i < 3; i++)
    {
        printf("Enter details for student %d\n\n",i+1);
        printf("Enter your name:-\n");
        fgets(class_9[i].name, 15, stdin);
        printf("Enter your Roll No.:-\n");
        scanf(" %d",&class_9[i].roll);
        printf("Enter your class_9s:-\n");
        scanf(" %f",&class_9[i].marks);
        getchar();
    }
    int Goat = Goatofclass();
    printf("So Mr.Goat title goes to %s who secured %.2f marks in their subject.\n",class_9[Goat].name,class_9[Goat].marks);// here we are using the index of topper to print his name and his marks in console

    
     return 0;
}