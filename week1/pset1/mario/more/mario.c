#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int top = 1;
    int steps = 0;

    do
    {
        // Enter height
        height = get_int("Enter height (positive number between 0 and 23): ");
    }
    while (height < 0 || height > 23);

    // Build the pyramid
    int row = height;
    int spaces = row - top;

    // Loop for rows of stairs aka height
    for (int i = 0; i < height; i++)
    {
        // Print spaces
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        // Create number for steps
        steps = row - spaces;

        // Decrement spaces
        spaces--;

        // Print hashes aka steps for the left side of the pyramid
        for (int k = 0; k < steps; k++)
        {
            printf("#");
        }

        // Print gap
        printf("  ");

        // Print hashes aka steps for the right side of the pyramid
        for (int m = 0; m < steps; m++)
        {
            printf("#");
        }

        // Print new line to start next row
        printf("\n");
    }

    return 0;
}

//good use of comments - code is very readable and logic is easy to follow
//data validation in place - program does not accept negative values or values over 23
//well done