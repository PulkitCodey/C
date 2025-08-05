#include <stdio.h>
// A code to make a complex number
typedef struct maths
{
    float real;
    float imaginery;
}complexNumber;
complexNumber arr[5];
void display(float, float);
void display(float a ,float b){
    printf("%.0f + %.2fi\n",a,b);
}

int main() {
for (int i = 0; i < 5; i++)
{
    printf("For complex number %d\n",i+1);
    printf("Enter real number\n");
    scanf("%f",&arr[i].real);
    printf("Enter imagenery number\n");    
    scanf("%f",&arr[i].imaginery);
}
for (int i = 0; i < 5; i++)
{
    printf("The %d complex number is ",i+1);
    display(arr[i].real, arr[i].imaginery);
}

     return 0;
}