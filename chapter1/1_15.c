#include <stdio.h>
float FahrToCelsius(float fahr);
 /* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300; floating-point version */
 //moving the  celcius converion to a separate method
 int main(void){
    float fahr, celsius;
    float lower, upper, step;
    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;
    printf("Fahrenheit Celsius\n");
    while (fahr <= upper) {
        celsius = FahrToCelsius(fahr);
        printf("%6.0f %9.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
 }

 float FahrToCelsius(float fahr){
    float celsius;
    celsius = (5.0/9.0) * (fahr-32.0);
    return celsius;
 }