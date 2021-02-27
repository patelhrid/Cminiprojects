#include <stdio.h>

int main(void)
{
  int number;
  scanf("%d", &number);
  float heights[number+1];
  float widths[number];
  float area[number];

  for (int counter = 0; counter < number+1; counter++)
  {
    scanf("%f", &heights[counter]);
  }
  for (int counter1 = 0; counter1 < number; counter1++)
  {
    scanf("%f", &widths[counter1]);
  }

  for (int counter2 = 0; counter2 < number; counter2++)
  {
    area[counter2] = (((heights[counter2] + heights[counter2+1]) / 2) * widths[counter2]);
  }
  
  float total;
  for (int counter3 = 0; counter3 < number; counter3++)
  {
    total = total + area[counter3];
  }

  printf("%.2f\n", total);

}
