#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int countLetters(string text);
int countTheWords(string text);
int countThesentences(string text);

int main(void)
{
    string text;
    int letters, words, sentences, index;
    double L, S;

    text = get_string("Text:");

    letters = countLetters(text);
    words = countTheWords(text);
    sentences = countThesentences(text);

    L = letters / (float)words * 100;
    S = sentences / (float)words * 100;

    index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index > 16)
    {
        printf("Grade 16+\n");
    }

    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int countLetters(string text)
{
    int len, LettersCounter = 0;

    len = strlen(text);

    for (int i = 0; i < len; i++)
    {
        if (isalpha(text[i]) != 0)
        {
            LettersCounter ++;
        }
    }

    return LettersCounter;
}

int countTheWords(string text)
{
    int length, counter = 0;

    length = strlen(text);

    for (int i = 0; i< length; i++)
    {
        if (text[i] == ' ')
            counter ++;
    }
    counter ++;

    return counter;
}

int countThesentences(string text)
{
    int length, counter = 0;

    length = strlen(text);

    for (int i = 0; i< length; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            counter ++;
    }

    return counter;
}