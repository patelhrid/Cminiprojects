#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  //getting number of input
  int number;
  scanf("%d", &number);
  int input[number];

  //getting input
  for (int counter = 0; counter < number; counter++)
  {
    scanf("%d", &input[counter]);
  }

  int counter1 = 0;
  int stopper;
 
  //editing the array
  for (int counter1 = 0; counter1 < number; counter1++)
  {
     if (input[counter1] == 0)
     {
       stopper = 1;
       for (int counter3 = counter1; stopper > 0; counter3--)
       {
         if (input[counter3-1] != 0 && counter3-1 >= 0)
          {
            input[counter3-1] = 0;
            stopper = 0;
          }
       }
     }
  }

  //calculating the total
  int total = 0;
  for (int counter2 = 0; counter2 < number; counter2++)
  {
    total = total + input[counter2];
  }
  
  //printing the total
  printf("%i\n", total);
}
