#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char c;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        charCount++;

        if (c == '\n') {
            lineCount++;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
    }

    if (charCount > 0) {
        lineCount++;
    }

    printf("Character count: %d\n", charCount);
    printf("Word count: %d\n", wordCount);
    printf("Line count: %d\n", lineCount);

    fclose(file);

    return 0;
}