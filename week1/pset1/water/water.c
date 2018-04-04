#include <cs50.h>
#include <stdio.h>

int minutes;
int bottles;

int main(void)
{
    // Request length of shower in minutes
    minutes = get_int("Length of shower (minutes): ");

    // Convert minutes to bottles of water.  1 minute = 12 bottles.
    bottles = minutes * 12;

    // Print results to the console
    printf("Minutes: %i\n", minutes);
    printf("Bottles: %i\n", bottles);
}