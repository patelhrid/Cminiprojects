#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int height;
    int j = 0;
    int k = 0;
    
    do
    {
        height = get_int("Enter a height between 1 and 8: ");
    }
    while (height <1 || height >8);

    for (int i = 0; i < height; i++)
    {
        for (int spaces = height - 1; spaces > j; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < i+1; hashes++)
        {
            printf("#");
        }
        j++;
        printf("\n");
    }
       
}