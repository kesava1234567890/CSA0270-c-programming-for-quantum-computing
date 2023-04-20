#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main() {
    FILE *file;
    char buffer[BUFFER_SIZE];
    int read_bytes;

    file = fopen("data.bin", "rb");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    while ((read_bytes = fread(buffer, sizeof(char), BUFFER_SIZE, file)) > 0) {
        for (int i = 0; i < read_bytes; i++) {
            printf("%02X ", buffer[i]);
        }
    }

    printf("\n");

    fclose(file);

    return 0;
}

