#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int top = 2;
    int steps = 0;

    do
    {
        // Enter height
        height = get_int("Enter height (positive number between 0 and 23): ");
    }
    while (height < 0 || height > 23);

    // Build the pyramid
    int row = height + 1;
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

        // Print hashes aka steps
        for (int j = 0; j < steps; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}

//good use of comments for explaining what lines of code are doing in the program
//data validation in place - program only accepts input ranging from 0 to 23, inclusive
//program is very readable and easy to follow the logic