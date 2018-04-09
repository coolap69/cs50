#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get person's name
    string s = get_string("Name: ");
    printf("%s\n", s);

    // Target 1st letter
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == s[0])
        {
            // Check to see if letter is lowercase or uppercase
            if (islower(s[0]))
            {
                // If lowercase, change to uppercase and print
                s[0] = toupper(s[0]);
                printf("%c", s[0]);
            }
            else
            {
                // If uppercase, print
                printf("%c", s[0]);
            }
        }
    }
    // Target space
    for (int j = 0; j < strlen(s); j++)
    {
        if (s[j] == ' ')
        {
            // If space is found, go to next character.
            // If lowercase, change to uppercase and print
            if (islower(s[j + 1]))
            {
                s[j + 1] = toupper(s[j + 1]);
                printf("%c", s[j + 1]);
            }
            else
            {
                // If uppercase, print
                printf("%c", s[j + 1]);
            }
        }
    }
    // Print new line
    printf("\n");

}