#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

// usages of files keep A log File 

int main(){

    FILE *logFile = fopen("log.txt", "a");

    fprintf(logFile, "Hello at 01:30 AM\n");

    fclose(logFile);

    return 0;
}