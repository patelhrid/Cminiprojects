#include <stdio.h>

int main(void)
{
    int total_count, counter, counter1, swap_var;
    int array[98];
    scanf("%d", &total_count);
    for (counter = 0; counter < total_count; counter++)
        {
        scanf("%d", &array[counter]);
        }
    for (counter = 0 ; counter < total_count - 1; counter++)
        {
            for (counter1 = 0 ; counter1 < total_count - counter - 1; counter1++)
            {
            if (array[counter1] > array[counter1+1])
                {
                    swap_var = array[counter1];
                    array[counter1] = array[counter1+1];
                    array[counter1+1] = swap_var;
                }
            }
        } 
    float neighbourhoodSize[total_count];
    for (counter = 1; counter < total_count-1; counter++)
    {
        neighbourhoodSize[counter] = ((float)((array[counter+1] - array[counter]) + (array[counter] - array[counter-1])) / 2);
    }
    
    float smallest;
    int i;
    smallest = neighbourhoodSize[1];
 
    for (i = 1; i < total_count-1; i++) 
    {
      if (neighbourhoodSize[i] < smallest) 
      {
         smallest = neighbourhoodSize[i];
      }
   }
   printf("%.1f\n", smallest);
}
