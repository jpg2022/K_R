#include <stdio.h>
 #define IN 1 /* inside a word */
 #define OUT 0 /* outside a word */
 /* count lines, words, and characters in input */
 int main(void){
    int c, lines, words, characters, state;
    state = OUT;
    lines = words = characters = 0;
    while ((c = getchar()) != EOF) {
        ++characters;
        if (c == '\n'){
            ++lines;
        }
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }else if (state == OUT) {
            state = IN;
            ++words;
        }
    }
    printf("%d %d %d\n", lines, words, characters);
 }
