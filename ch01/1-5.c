#include <stdio.h>

#define LOWER  0    /* lower limit of temperatures */
#define UPPER 300   /* upper limit */
#define STEP 20     /* increment degrees */ 

/* prints celcius to farenheit conversion */

main () {

    int fahr;

    char border[] = "-----------";
    char menuFahr[] = "Fahr";
    char menuCel[] = "Cel";

    printf("%s\n%3s\t%3s\n%s\n", border,  menuFahr, menuCel, border);
   
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3.0f %7.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }
}
