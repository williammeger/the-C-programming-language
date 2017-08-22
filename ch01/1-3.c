#include <stdio.h>

#define LOWER  0    /* lower limit of temperatures */
#define UPPER 300   /* upper limit */
#define STEP 20     /* increment degrees */ 


main () {

    float fahr, celcius;

    char border[] = "-----------";
    char menuFahr[] = "Fahr";
    char menuCel[] = "Cel";

    printf("%s\n%3s\t%3s\n%s\n", border, menuFahr, menuCel,  border);
    
    fahr = LOWER;
    while (fahr <= UPPER) {
      celcius = (5.0 / 9.0) * (fahr - 32);
      printf("%3.0f %7.1f\n", fahr, celcius);
      fahr += STEP;
    }
}
