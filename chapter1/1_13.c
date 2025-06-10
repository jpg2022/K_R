#include <stdio.h>




//copied from github
int main(void)
{
  int histogram[100];
  int histogram_length = 0;

  // Initialize the histogram array with 0
  int i;
  for (i = 0; i < 100; ++i)
  {
    histogram[i] = 0;
  }

  // Count the words length and store in histogram array at the
  // specific index
  char c;
  int letter_count = 0;
  while ((c = getchar()))
  {
    if (c == ' ' || c == '\t' || c == '\n' || c == EOF)
    {
      if (letter_count > 0)//this is executed after every new blank for a new word to be proccessed into histogram
      {
        ++histogram[letter_count - 1];

        //for example, if the max word length is 10, the histogram array will be
        // 0 1 2 3 4 5 6 7 8 9, we dont want to go beyond 9
        // so we set the histogram length to 9
        if (histogram_length < letter_count - 1)
        {
          histogram_length = letter_count - 1;
        }

        letter_count = 0;
      }
      if (c == EOF)
      {
        break;
      }
    }
    //no spaces or special charcters, simply continue counting word length
    else
    {
      ++letter_count;
    }
  }

  // Add in the histogram array a end of useful data char
  histogram[histogram_length + 1] = '$';

  putchar('\n');

  int column_index = 0;
  int line_index = 0;

  // Print horizontal histogram
  printf("Horizontal Histogram\n--------------------\n");

  while (histogram[column_index] != '$')
  {
    printf("%3d: \t", column_index + 1);

    for (line_index = 0; line_index < histogram[column_index]; ++line_index)
    {
      putchar('#');
    }

    putchar('\n');

    ++column_index;
  }

  putchar('\n');


  }

  
