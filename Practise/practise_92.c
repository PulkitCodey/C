#include <stdio.h>
// A code to show the use of file(I/O)
int main()
{
    int num = 0;
    FILE *file;// Here (FILE) is a structure and is need to be created to access files and pointer helps in maintaining communication between file and program
    file = fopen("feeder_92.txt", "r"); // Here fopen is used to open files and in it we specify name of file and mode
    /* There are almost 5 modes
    r -> open for reading
    rb -> open for reading files which are in binary like jpg or dat
    w -> open for writing
    wb -> open for writing in binary
    a -> open for append if file doesn't exit it will be created
    */
    if (file == NULL)
    { // here we are using (NULL) pointer which points to nowhere and is used in condition to check if file exist or not.
        printf("File doesn't exist.\n");
    }
    do// Added to check if someone is messing up with us and deletes file intentionally or if firewall deletes the file
    {
        printf("Creating one.\n"); // This will create a file and open it to write in it
        file = fopen("feeder_92.txt", "w");
        if (file == NULL)
        {
            printf("Unable to create file.\n");
            return 1; // error
        }
        num = 69;
        fprintf(file, "%d\n", num);
        fclose(file); // closing file to free resources that are being used
        printf("Press Enter to continue...\n");
        getchar();
        if (file == NULL)
            printf("File is moved or deleted\n");
    } while (file == NULL);

    file = fopen("feeder_92.txt", "r");  // reopening the file
    fscanf(file, "%d", &num);            // This is going to read from file to which pointer(file) is pointing to and assign it to num also here we are using %d as we expect that data is going to be intege
    printf("Value of num is %d\n", num); // going to print value of num that is assigned above
    fclose(file);                        // closing file to free resources that are being used
    return 0;
}
