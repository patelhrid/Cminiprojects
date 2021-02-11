#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //getting input from user
    char original[99];
    char anagram[99];
    scanf("%s", &original);
    scanf("%s", &anagram);

    bool wildcard;
   
    //searching the array
    for (int counter = 0; counter < strlen(original); counter++)
    {
      for (int counter1 = 0; counter1 < strlen(original); counter1++)
      {
        if (anagram[counter] == original[counter1] || anagram[counter] == '*')
        {
          wildcard = true;
          counter++;
          original[counter1] = '/';
        }
        else
        {
          wildcard = false;
        }
      }
    }

    //printing if wildcard is true
    if (wildcard == true)
    {
      printf("A\n");
    }
    else
    {
      printf("N\n");
    }
}
