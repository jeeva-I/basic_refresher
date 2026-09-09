/*******************************************************************************
 * Name: JEEVA
 * Date: 09/09/2026
 * Description: Print number of characters, lines and words
 * ****************************************************************************/

/* Header Inclusion */
#include <stdio.h>
#include <ctype.h>

/* Function prototype */
void my_wc();

/* Main program start here */
int main()
{
    /* Function call */
    my_wc();

    return 0;
}

/* Function definition */
void my_wc()
{
    int ch;
    int ch_count = 0;
    int word_count = 0;
    int line_count = 0;
    int in_word = 0;

    while ((ch = getchar()) != EOF)
    {
        ch_count++;

        if (ch == '\n')
        {
            line_count++;
        }

        if (isspace(ch))
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            word_count++;
            in_word = 1;
        }
    }

    printf("Character count : %d\n", ch_count);
    printf("Line count : %d\n", line_count);
    printf("Word count : %d\n", word_count);
}