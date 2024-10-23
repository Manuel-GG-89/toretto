#ifndef RESULT_TYPE_H
#define RESULT_TYPE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure Result
typedef struct {
    int type;
    union {
        void* value;
        const char* error;
    };
} Result;

// Define the constants OK and ERR
#define OK 0
#define ERR 1

// Define the macros OK_RESULT and ERR_RESULT
#define OK_RESULT(val) (Result){ .type = OK, .value = (void*)(val) }
#define ERR_RESULT(msg) (Result){ .type = ERR, .error = msg }

// Cleaning function to release memory assigned to the structure pointer results
void cleanup_result(Result* res);

// Cleaning function to release memory assigned to the structure pointer results
void cleanup(void* ptr);

// Define the macro CLEANUP_RESULT
#define RESULT_AUTO_CLEANED(value) __attribute__((cleanup(cleanup_result))) Result value

#endif // RESULT_TYPE_H