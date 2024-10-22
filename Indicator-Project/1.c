#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') { // Continue until we reach the null terminator
        length++;         // Increment the length counter
        str++;            // Move the pointer to the next character
    }
    return length;        // Return the final length
}

int main() {
    char str[100]; // Array to hold the input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string from standard input

    // Optional: Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    int length = stringLength(str); // Call the function to get string length
    printf("Length of the string is: %d\n", length); // Output the length

    return 0;
}
