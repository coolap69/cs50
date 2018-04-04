#include <cs50.h>
#include <stdio.h>

int minutes;
int bottles;

int main(void)
{
    // Request length of shower in minutes
    do
    {
        minutes = get_int("Length of shower in minutes (positive numbers only): ");
    }
    while (minutes < 0);

    // Convert minutes to bottles of water.  1 minute = 12 bottles.
    bottles = minutes * 12;

    // Print results to the console
    printf("Minutes: %i\n", minutes);
    printf("Bottles: %i\n", bottles);
}