#include <stdio.h>
// A code that calculates area of square using functions
#include <math.h>
float area(int);

float area (int a ){//pow() returns a double. If we use float, the result will be converted and may lose precision. It's better to use double for accurate results."
    return pow(a,2);
}
int main() {
    int i=0;
    puts("Want to calculate area of square. Alright give me length of side of area:-");
    scanf("%d",&i);
    float /*Can use Double here format specifier will be same that is %f*/ r = area(i);
    printf("Area of square with length of side %d is %.2f", i ,r );
    return 0;
}