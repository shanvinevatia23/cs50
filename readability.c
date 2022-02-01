#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    //text user input
    string text = get_string("Text: ");

    //calculates letters with strlen
    int letter_total = strlen(text);
    
    int letter_count = 0;
    


    for (int i = 0; i < letter_total; i++)
    {
        if (isalpha(text[i]))
        {
            letter_count = letter_count + 1;
        }
    }
    //printf("%i\n",letter_count);
    //total number of words
    int word_total = strlen(text);
    //printf("%i\n",word_total);
    int word_count = 1;
    for (int i = 1; i < word_total; i++)
    {
        if ((isspace(text[i])) && (isalpha(text[i + 1])))
        {
            word_count += 1;
        }
    }
    //printf("%i\n",word_count);

    //sentence counting
    int sentence_total = strlen(text);
    int sentence_count = 0;

    for (int i = 0; i < sentence_total; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?' || text[i] == ':')
        {
            sentence_count += 1;
        }
    }
    //printf("%i\n",sentence_count);
    //printf("%i\n",sentence_total);

    //calculating letters/100
    float L = ((float)letter_count * 100) / (float)word_count;
    //printf ("Average number of letters per 100 words: %i\n", (int)averagenumberoflettersper100words);

    // Calculate average number of sentences per 100 words
    float S = ((float) sentence_count * 100) / (float) word_count;
    //printf ("Average number of sentences per 100 words: %i\n", (int)averagenumberofsentencesper100words);
    // Calculate grade
    float grade = 0.0588 * L - 0.296 * S - 15.8;

    //float finalgrade = round(grade);

    if (grade >= 1 && grade <= 16)
    {
        printf("Grade %i\n", (int) round(grade));
        //printf("\n");
    }
    else
    {
        if (grade < 1)
        {
            printf("Before Grade 1\n");
            //printf("\n");
        }

        if (grade > 16)
        {
            printf("Grade 16+\n");
            //printf("\n");
        }
    }
}