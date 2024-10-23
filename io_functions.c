#ifndef IO_FUNCTIONS_C
#define IO_FUNCTIONS_C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "result_type.h"


// Function to read the user's input safely
Result getline_stdin() {
    size_t size = 128; // Initial buffer size
    size_t pos = 0;    // Current position in the buffer
    char *buffer = malloc(size);
    if (buffer == NULL) {
        return ERR_RESULT("Memory allocation error");
    }
    int c;
    while ((c = fgetc(stdin)) != EOF && c != '\n') {
        buffer[pos++] = (char)c;
        // If we reach the size of the buffer, we expand it
        if (pos >= size) {
            size *= 2;
            char *new_buffer = realloc(buffer, size);
            if (new_buffer == NULL) {
                free(buffer);
                return ERR_RESULT("Error de reasignación de memoria");
            }
            buffer = new_buffer;
        }
    }
    // Handle the case of EOF without entry
    if (pos == 0 && c == EOF) {
        free(buffer);
        return ERR_RESULT("Error al leer la entrada");
    }
    buffer[pos] = '\0'; // Finish the chain with '\ 0'
    return OK_RESULT(buffer);
}

// Function to ask the user a question and read the answer safely
Result answer_user_input(const char* question) {
    printf("%s", question);
    return getline_stdin();
}

#endif // IO_FUNCTIONS_C