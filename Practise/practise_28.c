#include <stdio.h>
// A code that checks if a character is lowercase or uppercase
int main() {
    puts("Is that a lowercase letter or an uppercase letter? Lets find out");
    char c;
    scanf("%c",&c);
    if(c>=97 && c<=122){ //That number is ascii value of lowercase letters from a which is 97 till z which is 122
        puts("Its a lowercase letter");
    }
    else if(c>=65 && c<=90 ){ //The number 65 is ascii value of Uppercase letters and 65 is A and 90 is Z
    puts("Its a uppercase letter");
    }
     return 0;
}