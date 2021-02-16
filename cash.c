#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    
    float change;
    int cents;
 
    do
    {
        change = get_float("Enter amount owed: ");
        cents = round(change * 100);
    }
    while (change < 0);
    
    int quarters = cents / 25;
    int dimes = (cents % 25) / 10;
    int nickels = ((cents % 25) % 10) / 5;
    int pennies = ((cents % 25) % 10) % 5;
    int coins = quarters + dimes + nickels + pennies;
    
    printf("%d coins.\n", coins);

}