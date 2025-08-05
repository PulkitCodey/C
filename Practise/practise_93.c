#include <stdio.h>
// A code to make a file which is also able to read/write in it
int main() {
    FILE  *file;
    int input[3]={69, 96, 1969};
    int output;// I am not using array cause not even needed
   do
   {
    puts("Creating file...");
    file = fopen("feeder_93.txt","w");
    puts("DONE");
    puts("Writing into file. Press enter to continue...");
    getchar();
   for (int i = 0; i < 3; i++)
   {
    fprintf(file, "%d", input[i]);
    if (i!=2){fputc(' ',file);}
   }
   puts("Done writing. Press enter to continue...");
   getchar();
   if (file == NULL)
   {
    puts("File has been moved or deleted");
   }
   
   } while (file == NULL);
   
   fclose(file);
   file = fopen("feeder_93.txt","r");
   puts("Reading file. Press enter to continue...");
   getchar();
   puts("Output:-");
   while ((fscanf(file, "%d", &output))==1)
   {
       printf("%d",output);//This will keep printing new output and flushing the old one
       printf(" ");
   }
   fclose(file);
     return 0;
}