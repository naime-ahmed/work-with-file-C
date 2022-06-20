#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int main(){

    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if (inputFile == NULL)
    {
        fprintf( outputFile, "File not found", "w" );
        return 0;
    }


    int n;
    fscanf(inputFile, "%d", &n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        fscanf(inputFile, "%d", &a);
        sum+=a;
    }

    fprintf(outputFile, "sum -> %d", sum);
    

    // close all the file for best practice
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}