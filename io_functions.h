#ifndef IO_FUNCTIONS_H
#define IO_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "result_type.h"

// Function to read the user's input safely
Result getline_stdin();

// Function to ask the user a question and read the answer safely
Result answer_user_input(const char* question);

#endif // IO_FUNCTIONS_H