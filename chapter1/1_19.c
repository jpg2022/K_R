#include <stdio.h>
 #include <stdbool.h>
 #define MAXLINE 1000 /* maximum input line length */
 int getline(char line[], int maxline);
 void copy(char to[], char from[]);
  void reverseLine(char line[], int len);
 /* print the longest input line */
int main(void)
 {
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0){
        if (len > max) {
            //there is a new max string, print the string here
            reverseLine(line, len);
            printf("new longest string: %s", line);
            max = len;
            copy(longest, line);
            if(len >15){
                printf("this is longer than 15: %s", line);
            }
        }
    }
    if (max > 0) /* there was a line */
        printf("%s", longest);
    return 0;
 }



void reverseLine(char line[], int len){
    int i; char temp;
    for(i = len-1; i>len/2; --i){//i is the index of the last character
        temp = line[len-i -1];
        line[len -i -1] = line[i];
        line[i] = temp;
    }
}
 /* getline: read a line into s, return length */
 int getline(char s[],int lim)
 {
    int c, i, blankint;
    bool blank;
    
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
        s[i] = c;
    
    }
    
    if (c == '\n') {
            s[i] = c;
            ++i;
    }
    s[i] = '\0';
    

    
    return i;
 }
 /* copy: copy 'from' into 'to'; assume to is big enough */
 void copy(char to[], char from[])
 {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
 }
