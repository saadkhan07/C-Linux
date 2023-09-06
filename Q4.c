// part_d.c
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool Vowel(const char *word) {
    while (*word) {
        char lowerCh = tolower(*word);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            return true;
        }
        word++;
    }
    return false;
}

void reverse(char *word) {
    int length = strlen(word);
    for (int i = 0; i < length / 2; i++) {
        char temp = word[i];
        word[i] = word[length - 1 - i];
        word[length - 1 - i] = temp;
    }
}

int main() {
    FILE *input, *output;
    char word[100];

    input = fopen("inp.txt", "r");
    output = fopen("InvertedWords.txt", "w");
    if (input == NULL || output == NULL) {
        printf("Error in file opening.\n");
        return;
    }

    while (fscanf(input, "%45s", word) != EOF) {
        if (Vowel(word)) {
            reverse(word);
        }
        fprintf(output, "%s ", word);
        //printing in file
    }

    fclose(input);
    fclose(output);
    return 0;
}
