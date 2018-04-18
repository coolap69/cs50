// Helper functions for music

#include <cs50.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int denominator;
    int eighths = 0;

    denominator = fraction[2];
    // TODO
    if (denominator == '8')
    {
        eighths = atoi(fraction[0]);
    }
    else if (denominator == '4')
    {
        eighths = (atoi(fraction[0])) * 2;
    }
    else if (denominator == '2')
    {
        eighths = (atoi(fraction[0])) * 4;
    }
    else if (denominator == '1')
    {
        eighths = (atoi(fraction[0])) * 8;
    }
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
    if (s[0] == "\0")
    return true;
    else
    return false;
}
