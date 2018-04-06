#include <cs50.h>
#include <stdio.h>

int main(void)
{
    double change;
    int coin = 0;

    // Receive input from user, making sure input is a postive integer, if not,
    // prompt again
    do
    {
        change = get_double("Change owed: ");
    }
    while (change < 0);

    double cents = change * 100.0;

    // Check to see if we can use quarters
    while (cents >= 25)
    {
        cents = cents - 25;
        coin++;
    }

    // If we can't use quarters, use dimes
    while (cents >= 10)
    {
        cents = cents - 10;
        coin++;
    }

    // If we can't use dimes, use nickels
    while (cents >= 5)
    {
        cents = cents - 5;
        coin++;
    }

    // If we can't use nickels, use pennies
    while (cents >= 1)
    {
        cents = cents - 1;
        coin++;
    }
    printf("%i\n", coin);
}