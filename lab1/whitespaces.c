#include <stdio.h>

int main() {
    int ch;
    int whitespace_count = 0;
    int newline_count = 0;

    printf("Enter text (Press Ctrl+D to end input on Unix/Linux or Ctrl+Z on Windows):\n");

    // Read characters until EOF
    while ((ch = getchar()) != EOF) {
        if (ch == ' ' || ch == '\t') {
            whitespace_count++;
        }
        if (ch == '\n') {
            newline_count++;
        }
    }

    printf("Number of whitespace characters (spaces and tabs): %d\n", whitespace_count);
    printf("Number of newline characters: %d\n", newline_count);

    return 0;
}
