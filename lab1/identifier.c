#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_KEYWORDS 32

// List of C keywords
const char *keywords[NUM_KEYWORDS] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "inline", "int", "long", "register", "restrict", "return", "short",
    "signed", "sizeof", "static", "struct", "switch", "typedef", "union",
    "unsigned", "void", "volatile", "while"
};

// Function to check if a string is a keyword
int is_keyword(const char *str) {
    for (int i = 0; i < NUM_KEYWORDS; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return 1; // Found a keyword
        }
    }
    return 0; // Not a keyword
}

// Function to check if a string is a valid identifier
int is_identifier(const char *str) {
    // Check if the string is empty
    if (str[0] == '\0') {
        return 0; // Not a valid identifier
    }

    // Check the first character
    if (!isalpha(str[0]) && str[0] != '_') {
        return 0; // Must start with a letter or underscore
    }

    // Check the rest of the characters
    for (int i = 1; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && str[i] != '_') {
            return 0; // Must be alphanumeric or underscore
        }
    }

    // Check if it's a keyword
    if (is_keyword(str)) {
        return 0; // Not a valid identifier if it's a keyword
    }

    return 1; // Valid identifier
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (is_identifier(input)) {
        printf("\"%s\" is a valid identifier in C.\n", input);
    } else {
        printf("\"%s\" is not a valid identifier in C.\n", input);
    }

    return 0;
}
