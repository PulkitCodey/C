#include <stdio.h>
// A code that calculates weight on different planets based on mass
float force_of_attraction(int);
float force_of_attraction(int planet){
    switch (planet)
    {
    case 1:
    return 3.7;
            
    case 2:
    return 8.87;
    
    case 3:
    return 9.81;
    
    case 4:
    return 3.71;
    
    case 5:
    return 24.79;
    
    case 6:
    return 10.44;
    
    case 7:
    return 8.69;
    
    case 8:
    return 11.15;

    case 9:
    return 0.62;

    default:
    return 0.0; // or some error indicator

    }
}
/*
Approximate Surface Gravity of the Planets (in m/s²)
1 Mercury= 3.7
2 Venus= 8.87
3 Earth= 9.81
4 Mars= 3.71
5 Jupiter= 24.79
6 Saturn= 10.44
7 Uranus= 8.69
8 Neptune= 11.15
9 Pluto (dwarf planet)= 0.62
*/
float calculation(float, int);
float calculation(float a, int planet){
    return a * force_of_attraction(planet);
}
int main() {
    float mass=0;
    int choice=0;
    puts("Sorry to ask but what's your mass(Note:- I am not asking weight I am asking mass) in kg?");
    scanf("%f",&mass);
    if (mass==0)
    {
        puts("Your weight is 0 across all the planets");
        return 1;
    }
    else {
        puts("To which planet you want to see your mass to get calculated in\n"
        "1 Mercury\n"
        "2 Venus\n"
        "3 Earth\n"
        "4 Mars\n"
        "5 Jupiter\n"
        "6 Saturn\n"
        "7 Uranus\n"
        "8 Neptune\n"
        "9 Pluto (dwarf planet) Select from (1 to 9)");
        scanf("%d",&choice);
        float r = calculation(mass,choice);
        if(choice>=1 && choice<=9)
        printf("Your weight on that planet is %.1f Newtons",r);
        else
        printf("Seems like you made a wrong choice");
    }
    
     return 0;
}