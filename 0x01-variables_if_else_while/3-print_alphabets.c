#include <stdio.h>

/**
 * main - entry point
 * return: 0 (success)
 */


int main() {
    char lowercase, uppercase;
    
    // Print lowercase letters
    for(lowercase = 'a'; lowercase <= 'z'; lowercase++) {
        putchar(lowercase);
    }
    
    // Print uppercase letters
    for(uppercase = 'A'; uppercase <= 'Z'; uppercase++) {
        putchar(uppercase);
    }
    
    putchar('\n');  // Print a new line
    
    return 0;
}

