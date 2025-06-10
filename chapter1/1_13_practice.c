#include <stdio.h>

int main(void){
    char c;
    int letter_count=0;
    int max_length = 0;
    int histogram[100] = {0};
    while(c= getchar()){
        if(c == EOF){
            break;
        }else if((c == ' ' || c == '\n' || c =='\t') && letter_count >0){
            if(letter_count > max_length){
                max_length = letter_count;
            }
            histogram[letter_count] += 1;
            letter_count=0;
        }else{
            ++letter_count;
        }
    }
    int i;
    int h;
    for(i = 0; i <= max_length; ++i){
        printf("%3d  :",i);
        for(h = 0; h < histogram[i]; ++h){
            putchar('#');
        }
        putchar('\n');
    }

    return 0;
}