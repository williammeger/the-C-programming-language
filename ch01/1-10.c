/*
 * Exercise 1-10
 * Write a program to copy its input to its output
 * replacing each tab with \t each backspace by \b
 * and each backslash with \\
 * This makes tabs and backspaces visible in an unambigious way
 */

#include <stdio.h>

    main() {
   
      int c;

      while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');  
            putchar('t'); 
        }  
        if (c == '\b') {
            putchar('\\');  
            putchar('b');  
        }
        if (c == '\\') {
            putchar('\\'); 
            putchar('\\');   
        }
        putchar(c);
    }
}
   
