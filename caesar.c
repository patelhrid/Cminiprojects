#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
     //check if valid parameters
     if (argc == 2 && isdigit(*argv[1]))
     {
        
        //convert argv[1] to integer
        int k = atoi(argv[1]);
        
        //validate that it's all numbers
         for (int i = 0; i < strlen(argv[1]); i++)
         {
             int x = isdigit(argv[1][i]);
             if (x == 0)
             {
                return 1;
             }
         }

        //get text to encode
        string s = get_string("plaintext: ");
        printf("ciphertext: ");
        
        //convert
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (isalpha(s[i]) != 0)
            {
                if (isupper(s[i]) != 0)
                {
                    printf("%c", ((s[i] - 'A' + k) % 26) + 'A');
                }
                else
                {
                    printf("%c", ((s[i] - 'a' + k) % 26) + 'a');
                }
            }
        }
        printf("\n");
     }
     
     //yell at user if they didn't input a number
     else
     {
         printf("usage: ./caesar key\n");
     }
 }