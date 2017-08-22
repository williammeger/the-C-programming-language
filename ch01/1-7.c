#include <stdio.h>

/* copies input to output and prints EOF value; V 2.0 */

main () {
  
    int c;

    int a = EOF;
    printf("%d\n", a);

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}
