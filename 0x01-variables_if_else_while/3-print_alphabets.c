#include <stdio.h>

/**
 * main - entry point
 * return: 0 (success)
 */


int main() {
    char lowercase, uppercase;
    
   
    for(lowercase = 'a'; lowercase <= 'z'; lowercase++) {
        putchar(lowercase);
    }
    
    
    for(uppercase = 'A'; uppercase <= 'Z'; uppercase++) {
        putchar(uppercase);
    }
    
    putchar('\n');
    
    return 0;
}

