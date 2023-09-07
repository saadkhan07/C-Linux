#include <stdio.h>

int main() {
    FILE *file;
    char chr;

    file = fopen("Input_File.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    while ((chr = fgetc(file)) != EOF)
     {
        putchar(chr);
    }

    fclose(file);
    return 0;
}
