#include <stdio.h>
#include <string.h>

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

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (is_keyword(input)) {
        printf("\"%s\" is a keyword in C.\n", input);
    } else {
        printf("\"%s\" is not a keyword in C.\n", input);
    }

    return 0;
}
