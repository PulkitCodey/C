#include <stdio.h>
// This code is made to store Id , name and price of 5 products 
int main() {
  typedef  struct Product
    {   char Id[10];
        char name[30];
        float price;
} Item;
Item electronics[5];
for (int i = 0; i < 5; i++)
{
    printf("Enter Id of product %d\n",i+1);
    scanf(" %s",&electronics[i].Id);
    printf("Enter name of product %d\n",i+1);
    scanf(" %s",&electronics[i].name);
    printf("Enter price of product %d\n",i+1);
    scanf(" %f",&electronics[i].price);
}

    
     return 0;
}