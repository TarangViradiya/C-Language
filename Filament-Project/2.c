#include <stdio.h>  
#include <string.h>

int main() {  
    char str[100];  
    int freq[256] = {0};  // Array to store frequency of characters  
    int i = 0;  

    printf("Enter a string: ");  
    // Read characters until newline is reached  
    while ((str[i] = getchar()) != '\n' && i < 99) {  
        freq[(unsigned char)str[i]]++;  // Increment the frequency of the character  
        i++;  
    }  
    str[i] = '\0';  // Null-terminate the string  

    printf("Character frequencies:\n");  
    for (int j = 0; j < 256; j++) {  
        if (freq[j] > 0) {  
            printf("'%c': %d\n", j, freq[j]);  // Print character and its frequency  
        }  
    }  

    return 0;  
}