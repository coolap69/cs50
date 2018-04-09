#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get person's name
    string s = get_string("Name: ");
    printf("%s\n", s);

    // Check to see if first letter of name is lowercase or uppercase
    // if (islower(s[0]))
    // {
    //     // If lowercase, convert to uppercase and print character
    //     s[0] = toupper(s[0]);
    //     printf("%c\n", s[0]);
    // }
    // else // Print uppercase character
    // {
    //     printf("%c\n", s[0]);
    // }

    // Get length of string

    // printf("%lu\n", strlen(s));

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == s[0])
        {
            if (islower(s[0]))
            {
                s[0] = toupper(s[0]);
                printf("%c", s[0]);
            }
            else
            {
                printf("%c", s[0]);
            }
        }
    }
    for (int j = 0; j < strlen(s); j++)
    {
        if (s[j] == ' ')
        {
            if (islower(s[j + 1]))
            {
                s[j + 1] = toupper(s[j + 1]);
                printf("%c\n", s[j + 1]);
            }
            else
            {
                printf("%c\n", s[j + 1]);
            }
        }
    }

}