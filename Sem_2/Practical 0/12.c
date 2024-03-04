//WAP to count lines, words, tabs and characters.
#include <stdio.h>
#include <string.h>
void main() {
    FILE *file;
    char fname[100];
    char ch;
    int chars = 0, lines = 0, words = 1, tabs = 0;
    printf("Enter source file path : ");
    scanf("%s",fname);
    strcat(fname,".txt");
    file = fopen(fname, "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");
    }
    while ((ch = fgetc(file)) != EOF) {
        chars++;
        if (ch == '\n') {
            lines++;
        }
        if (ch == ' ' || ch == '\t') {
            words++;
        }
        if (ch == '\t') {
            tabs++;
        }
    }
    if (chars > 0) {
        words++;
        lines++;
    }
    printf("\n");
    printf("Total characters = %d\n", chars);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);
    printf("Total tabs       = %d\n", tabs);
    fclose(file);
}