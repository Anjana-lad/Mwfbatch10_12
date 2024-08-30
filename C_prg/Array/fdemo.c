#include <stdio.h>
#include <stdlib.h>
// #define BUFFER_SIZE 1000
void readFile(FILE * fPtr){
    char ch;
    do {
        ch = fgetc(fPtr);
        putchar(ch);
    } while (ch != EOF);
}
int main(){
    /* File pointer to hold reference of input file */
    FILE *fPtr;
    char new_data[1000];
    fPtr = fopen("G:\\Mwfbatch10_12\\C_prg\\Array\\demo.txt", "a");

    if (fPtr == NULL){
        printf("\nUnable to open file.\n");
    }
    else{
    printf("\nEnter data to append: ");
    fflush(stdin);          // To clear extra white space characters in stdin
    fgets(new_data,1000,stdin);

    fputs(new_data, fPtr);
    
    fPtr = freopen("G:\\Mwfbatch10_12\\C_prg\\Array\\demo.txt", "r", fPtr);

    
    printf("\nSuccessfully appended data to file. \n");
    printf("Changed file contents:\n\n");
    readFile(fPtr);
    fclose(fPtr);
    }
}