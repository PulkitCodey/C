#include <stdio.h>
// This program calculates area of rectangele using input for length and breadth from user
int main() {
    int length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length); //That scanf data type is used to scan the value that is entered by the user to store it in the address alloted for it
    printf("Enter the breadth of the rectangle: "); 
    scanf("%d", &breadth);// That (&) before breadth in &breadth is used to give address to breadth variable
    printf("The area of rectangle is %d\n", length * breadth);
     return 0;
}