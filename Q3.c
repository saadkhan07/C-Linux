#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


//creating fucntion to if a word i non-alphabet or not

bool isNonAlphabetWord(const char *word) {
    while (*word) {
        if (isalpha(*word)) return false;
        word++;
    }
    return true;
}

int main() {
    FILE *input, *output;
    char word[100];
    int idx = 0;
    input = fopen("Inp.txt", "r");
    output = fopen("NonAlphabetWords.txt", "w");
    if (input == NULL || output == NULL)
     {
        printf("Error in file operations.\n");
        return 1;
    }

    while (fscanf(input, "%99s", word) != EOF) {
        if (isNonAlphabetWord(word)) {
            // this is checking word to word acc to function
            fprintf(output, "%s\n", word);
        }
    }

    fclose(input);
    fclose(output);
    return 0;
}
