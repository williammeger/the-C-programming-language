/*
 * Exercise 1-9
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by
 * a single blank
 */

#include <stdio.h>

/* replace two or more blanks with one blank */

main() {
  
    int c;

    while (( c = getchar()) != EOF) {
            
        if ( c == ' ' ) {
            while (( c = getchar()) == ' ' ); /* process all subseqeunt spaces */
            putchar(' ');
        }   
        putchar(c);
    }
}
