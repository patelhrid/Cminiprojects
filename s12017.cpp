#include <stdio.h>

void swiftsInput(int a);
void semasInput(int b);

int main(void)
{
  //initializing variables
  int total_count;

  //asking for the number of games
  scanf("%d", &total_count);

  //initializing arrays
  int swifts[total_count];
  int semas[total_count];
  
  //getting scores for each game
  for (int counter = 0; counter < total_count; counter++)
  {
    scanf("%d", &swifts[counter]);
  }

  for (int counter = 0; counter < total_count; counter++)
  {
    scanf("%d", &semas[counter]);
  }

  //initializing score total variables
  int swiftTotal = 0;
  int semasTotal = 0;
  int finalCount = 0;
  
  //determining the games when the scores are equal
  for (int counter1 = 0; counter1 < total_count; counter1++)
  {
    //the maths
    swiftTotal = swiftTotal + swifts[counter1];
    semasTotal = semasTotal + semas[counter1];

    //biggest game count for same score
    if (swiftTotal == semasTotal)
    {
      finalCount = counter1 + 1;
    }
  }
  printf("%d\n", finalCount);
}
