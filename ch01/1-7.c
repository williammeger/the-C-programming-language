/*
 * Exercise 1-7
 * Write a program to print the value of EOF
 */

#include <stdio.h>

main () {
  
    int c;

    int a = EOF;
    printf("%d\n", a);

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}
