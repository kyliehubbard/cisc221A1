#include <stdio.h>
#include <string.h>

int main() {
    int c;  // Variable to store the current character
    int lines = 0, words = 0, characters = 0;
    int in_word = 0;  // Flag to check if we are in a word

    while ((c = getchar()) != EOF) {
        characters++;  // Count the character

        // Check if it's a newline, increment the line counter
         if (c == '\n') {
             lines++;
         }

        // Check if it's a space, tab, or newline, which are word delimiters
        if (c == ' ' || c == '\n' || c == '\t') {
            in_word = 0;  // We are not in a word anymore
        } else if (in_word == 0) {
            // We found the start of a new word
            in_word = 1;
            words++;
        }
    }

    // Output the results in the format: lines, words, characters
    printf("%d %d %d\n", lines, words, characters);
    
    return 0;
}



