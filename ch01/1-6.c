#include <stdio.h>


/* copy input to output; V 1.0 */
main () {

    int c;
    
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
} 
