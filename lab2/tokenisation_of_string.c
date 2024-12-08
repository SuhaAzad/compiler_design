#include <stdio.h>
#include <ctype.h>

#define MAX_TOKEN_LENGTH 64

int main() {
    const char *input = "var1 + 42 - var2";
    char token[MAX_TOKEN_LENGTH];
    int i = 0;

    while (*input) {
        // Skip whitespace
        if (isspace(*input)) {
            input++;
            continue;
        }

        // Handle identifiers
        if (isalpha(*input)) {
            while (isalnum(*input) && i < MAX_TOKEN_LENGTH - 1) {
                token[i++] = *input++;
            }
            token[i] = '\0';
            printf("IDENTIFIER: %s\n", token);
            i = 0; // Reset for the next token
            continue;
        }

        // Handle numbers
        if (isdigit(*input)) {
            while (isdigit(*input) && i < MAX_TOKEN_LENGTH - 1) {
                token[i++] = *input++;
            }
            token[i] = '\0';
            printf("NUMBER: %s\n", token);
            i = 0; // Reset for the next token
            continue;
        }

        // Handle operators
        if (*input == '+' || *input == '-') {
            token[0] = *input++;
            token[1] = '\0';
            printf("OPERATOR: %s\n", token);
            continue;
        }

        // Invalid token
        token[0] = *input++;
        token[1] = '\0';
        printf("INVALID TOKEN: %s\n", token);
    }

    printf("END OF FILE\n");
    return 0;
}

