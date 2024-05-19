#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_LINES 1000
#define MAX_WORD_LENGTH 50

int main() {
    char document[MAX_LINES][MAX_WORD_LENGTH];
    char word[MAX_WORD_LENGTH];
    int line_num = 1;
    int word_count = 0;
    
    FILE *fp = fopen("document.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(document[line_num - 1], MAX_WORD_LENGTH, fp) != NULL) {
        char *token = strtok(document[line_num - 1], " ,.-\n");
        while (token != NULL) {
            strcpy(word, token);
            for (int i = 0; word[i]; i++) {
                word[i] = tolower(word[i]);
            }
            printf("%s: %d\n", word, line_num);
            token = strtok(NULL, " ,.-\n");
        }
        line_num++;
    }

    fclose(fp);

    return 0;
}