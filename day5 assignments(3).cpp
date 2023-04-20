#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    FILE *input_file, *output_file;
    char line[MAX_LINE_LENGTH];
    char *token;

    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        perror("Error opening input file");
        exit(EXIT_FAILURE);
    }

    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        perror("Error opening output file");
        exit(EXIT_FAILURE);
    }

    while (fgets(line, MAX_LINE_LENGTH, input_file) != NULL) {
        token = strtok(line, " ");
        while (token != NULL) {
            if (strcmp(token, "red\n") == 0) {
                fputs("blue ", output_file);
            } else {
                fputs(token, output_file);
                fputs(" ", output_file);
            }
            token = strtok(NULL, " ");
        }
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}


