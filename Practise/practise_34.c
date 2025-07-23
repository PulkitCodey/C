#include <stdio.h>
//Context from very old movie --The truman show
void greetMorning(){
    printf("GoodMorning\n");
}

void sentence(){
    printf("Oh, and in case I don't see ya.");
}
void greetAfternoon(){
    printf(" GoodAfternoon.");
}

void greetEvening(){
    printf(" GoodEvening.");
}

void greetNight(){
    printf(" GoodNight.");
}


int main() {
    greetMorning();
    sentence();// Once I will learn arrays I will add option so that user can type GoodMorning and this could be finally complete then
    greetAfternoon();
    greetEvening();
    greetNight();
     return 0;
}