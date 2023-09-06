// part_b.c
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    char chr;

    input = fopen("inp.txt", "r");
    output = fopen("Integers.txt", "w");
    if (input == NULL || output == NULL) {
        printf("Error in file.\n");
        return;
    }

    while ((chr = fgetc(input)) != EOF) {
        if (isdigit(chr)) {
            fputc(chr, output);
        }
    }

    fclose(input);
    fclose(output);
    return 0;
}
