#include <stdio.h>
#include <cs50.h> 
#include <math.h> 

int main(void)
{
    float change;
    do
    {
        change = get_float("Enter change owed in dollars: ");
    }
    // to prompt the user again if the input in negative
    while (change < 0);
   
    // changes float (change / dollars) to integer (cents)
    int cents = round(change * 100);
   
    // quarter = 25; dime = 10; nickel = 5; penny = 1
    int coins = 0;
    // runs as long as the cents are greater or equal to than 25
    while (cents >= 25)
    {
        cents -= 25;
        // to update the number of coins
        coins++;
    }
   
    // runs as long as the cents are greater or equal to than 10 
    while (cents >= 10)
    {
        cents -= 10;
        // to update the number of coins 
        coins++;
    }
   
    // runs as long as the cents are greater or equal to than 5 
    while (cents >= 5)
    {
        cents -= 5;
        // to update the number of coins
        coins++;
    }
   
    // runs as long as the cents are greater or equal to than 1 
    while (cents >= 1)
    {
        cents -= 1;
        // to update the number of coins
        coins++;
    }
    // prints the number of coins returned.
    printf("Coins: %i\n", coins);
}