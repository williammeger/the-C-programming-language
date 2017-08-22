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
