#include <stdio.h>
 // In C, you can use #include <stdbool.h> and use 'bool', 'true', and 'false'.
    // Alternatively, use int with 0 (false) and 1 (true).
#include <stdbool.h>
 /* count lines in input */
int main(void){
    int c, nl;
    nl = 0;
   
    bool blank = false;
    while ((c = getchar()) != EOF){
        if(c == ' ' && blank == false){
            blank=true;
            putchar(c);
        }else if(c==' ' && blank ==true){
            ;
        }else{
            //'\n' is how we detect an enter key press.
            if (c == '\n') {
                nl++;
                blank = false;
            }
            putchar(c);
        }
    }
    printf("%d\n", nl);
    // ' ' (space) is the blank character, and '\t' is the tab character in C.
 }