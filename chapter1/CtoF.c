#include <stdio.h>
 /* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300; floating-point version */
 int main(void){

    //F = (9/5) * C + 32

    float fahr, celsius;
    float lower, upper, step;
    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    celsius = upper;
    printf("Celsius Fahrenheit\n");
    while (celsius >= lower) {
        fahr = ((9.0/5.0) * celsius)+32.0;
        printf("%6.0f %9.1f\n", celsius, fahr);
        celsius = celsius - step;
    }
 }