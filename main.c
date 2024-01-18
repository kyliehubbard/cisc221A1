#include <stdio.h>
#include <string.h>

int main() {
    int lineNum = 0;
    int wordNum = 0;
    int charNum = 0;

    int c;
    int inWord = 0; //indicates whether a character is inside a word

    while ((c = getchar()) != EOF) {
        charNum++;

        if (c == '\n' || c == ' ' || c == '\t') {
            if (inWord) {
                wordNum++;
                inWord = 0;  
            }
            if (c == '\n') {
                lineNum++;
            }
        } else {
            inWord = 1;
        }
    }

    if (inWord) {
        wordNum++;
    }

    printf("Number of lines: %d\n", lineNum);
    printf("Number of words: %d\n", wordNum);
    printf("Number of characters: %d\n", charNum);

    return 0;
}
