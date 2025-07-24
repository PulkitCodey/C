#include <stdio.h>
//Same program to convert celsius in fahrenheit but now uses function
float convert(float);
float convert(float a){
    return (a*9/5)+32;
}
int main() {
    char choice; 
    float celsius;
    puts("Oh having fever huh? But its showing in celsius. Do you want to convert it to fahrenheit? (Y/N)");
    scanf(" %c", &choice);
    if (choice == 'Y'|| choice =='y' ){ 
    printf("whats the temperature in celsius? ");
    scanf("%f", &celsius);
    float result = convert(celsius);
    printf("The temperature in fahrenheit is %.1f", result);
    } else if (choice =='N'||choice =='n') {
        printf("No worries I will not convert it have a good day :)");
    }
    else{
        printf("Wrong choice made!!!Quiting");//even handling wrong choices this time
        return 1;
    }
     return 0;
}