#include <stdio.h>

bool findPrime(int input, int i);

int main(void)
{
 	//getting input
  int number;
  scanf("%d", &number);
  int array[number];
  for (int counter = 0; counter < number; counter++)
  {
    scanf("%d", &array[counter]);
  }

  //variable to break out of loops
  int flag = 0;

  //cycling through all inputs
  for (int counter1 = 0; counter1 < number; counter1++)
  {
    for (int smaller = 3; smaller < array[counter1]; smaller++)
    {
      bool result = findPrime(array[counter1], smaller); //user-defined function
      if (result == true) //if i is prime and so is input+(input-i)
      {
        printf("%i %i\n", smaller, (array[counter1] + (array[counter1] - smaller)));
        flag = 1; //signal to switch to next input
      }
      if (flag == 1) //switch to next input
      {
        break;
      }
    }
  }
}

//finding primes
bool findPrime(int input, int i)
{
  //checking if the number is even or odd
  int modulo = input % i;
  if (modulo != 0)
  {
    //checking if that smaller number is prime
    for (int counter2 = 2; counter2 < i; counter2++)
    {
      if (i % counter2 == 0) //non-prime
      {
        return false;
      }
      else if ((i % counter2) != 0 && (input + (input - i)) % counter2 != 0) //prime
      {
        return true;
      }
    }
  }
}
