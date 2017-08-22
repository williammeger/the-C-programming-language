/*
 * Exercise 1-4
 * Write a program to print the corresponding
 * Celsius to Farenheit table
 */

#include <stdio.h>

#define LOWER  0    /* lower limit of temperatures */
#define UPPER 300   /* upper limit */
#define STEP 20     /* increment degrees */ 

/* prints celcius to farenheit conversion */
main () {

    float fahr, celcius;

    char border[] = "-----------";
    char menuFahr[] = "Fahr";
    char menuCel[] = "Cel";

    printf("%s\n%3s\t%3s\n%s\n", border, menuCel, menuFahr,  border);
    
    celcius = LOWER;
    while (celcius <= UPPER) {
      fahr = ((5.0 / 9.0) * celcius) + 32;
      printf("%5.1f %5.0f\n", celcius, fahr);
      celcius += STEP;
    }
}
