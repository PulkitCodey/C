#include <stdio.h>
// This code calculates area of circle or volume of cylinder by taking value of radius for cirle and value of radius and height from user
int main() {
    // Here I am using puts its works almost same as that printf but like you should let things stay for what they are made for puts is used for contextual things it can't do calculation or other stuff pure printer for c language and it automatically adds new line after completing like adding /n automatically after completing code printf doesn't do this thing
    puts("What you wanna calcuate area of cirle or volume of cylinder? Select 1 for area of circle and 2 for volume of cylinder");
     int choice; //choice is js declared
    scanf("%d", &choice);
    if (choice == 1) { //(if) is logical operator used for condition and only work if the given conditon is true or else it will skip everything written in it
        float radius; //float is same like that of int an another data type used to store floating values means to store decimal values
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        float area = 3.14 * radius * radius;
        printf("The area of the circle is: %.2f\n", area); //that (.2) before f in %.2f is used for adding precision to only two decimal points means it will print only till two decimals point in console and \n is used for skipping the line 
    } else if (choice == 2) { //(else if) is another logical operator like that of if its js second part of (if) like if that (if) condition become false it will skip everything inside it and skip to this (else if) and checks condition if it will be true that it will work. Why we can't use two (if's) here cause every (if) will run if its condition is true but (else if) will only run if that (if) condition is false.
        
        //I have also used ()==) which is called equality operator used to check if two values are equal or not
        //If you use (=) it will assign the value to the variable but if you use (==) it will check if the value is equal to the variable or not
        //So here I am checking if the choice is equal to 2 or not
        float radius, height;
        printf("Enter the radius of the cylinder: ");
        scanf("%f", &radius);
        printf("Enter the height of the cylinder: ");
        scanf("%f", &height);
        float volume = 3.14 * radius * radius * height;
        printf("The volume of the cylinder is: %.2f\n", volume);
    } else {    // (else) is the one which doesnt' hold any condition it will only work if nothings works and its optional to add it in code after (if)
        printf("Invalid choice. Please enter 1 for area of circle or 2 for volume of cylinder.\n");
    }
     return 0;
}