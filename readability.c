#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    float letters = 0;
    float words = 1;
    float sentences = 0;
    string text = get_string("Text: ");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char c = text[i];
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }
        else if (c == ' ')
        {
            words++;
        }
        else if (c == 46 || c == 63 || c == 33)
        {
            sentences++;
        }
    }

    float L = (letters / words) * 100;
    float s = (sentences / words) * 100;
    float index = (0.0588 * L - 0.296 * s - 15.8);

    if (round(index) >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (round(index) < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (round(index) > 1 && round(index) < 16)
    {
        printf("Grade %i\n", (int) round(index));
    }
}