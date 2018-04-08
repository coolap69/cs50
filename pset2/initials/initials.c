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
    if (islower(s[0]))
    {
        // If lowercase, convert to uppercase and print character
        s[0] = toupper(s[0]);
        printf("%c\n", s[0]);
    }
    else // Print uppercase character
    {
        printf("%c\n", s[0]);
    }
}