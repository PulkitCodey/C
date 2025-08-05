#include <stdio.h>
// A code to copy text from source file into destination file (two times)
int main() {
    char cp;
    FILE *sourcefile, *destinationfile;
    sourcefile = fopen("feeder_95.txt","r");
    if (sourcefile==NULL)
    {
        puts("Error source opening file.");
        return 1;
    }
    destinationfile = fopen("destination_95.txt", "w");
    if (destinationfile==NULL)
    {
        puts("Error destination opening file.");
        return 1;
    }
    while ((cp=fgetc(sourcefile))!= EOF)
    {
        fputc(cp,destinationfile);
    }
    fprintf(destinationfile, "\n\n================================================\n\n");
    rewind(sourcefile);// just placing our finger back to the start of text file first word so that we could read it again and write it in our destination file
    while ((cp=fgetc(sourcefile))!= EOF)
    {
        fputc(cp,destinationfile);
    }
    fclose(sourcefile);
    fclose(destinationfile);
     return 0;
}