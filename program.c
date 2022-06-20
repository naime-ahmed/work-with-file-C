#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int main(){

    FILE *inputFile;

    inputFile = fopen("input.txt", "r");

    if (inputFile == NULL)
    {
        printf("File not found!");
        return 0;
    }
    

    FILE *outputFile;
    outputFile = fopen("output.txt", "w");

    while (1)
    {
        char ch = fgetc(inputFile);
        if (ch == EOF)
        {
            break;
        }
        
        fputc(ch, outputFile);

    }

    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}