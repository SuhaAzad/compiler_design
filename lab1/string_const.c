#include <stdio.h>

int main() {
    const char *str = "Hello, World!"; // Constant string
    char *modifiable_str = "Hello, World!"; // Non-constant string

    // Attempt to modify the constant string
    // Uncommenting the next line will cause a compilation error
    // str[0] = 'h';

    // Modifying the non-constant string
    modifiable_str[0] = 'h'; // This is allowed

    printf("Constant string: %s\n", str);
    printf("Modified string: %s\n", modifiable_str);

    return 0;
}
