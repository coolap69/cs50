#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    string key;
    string plaintext;

    // Get key

    // Check to see if user entered key and only two arguments
    if (argc == 2)
    {
        key = argv[1];

        // Check each character in the string to see is it is an Alpha character, if not print error message
        for (int i = 0; i < strlen(key); i++)
        {
            if (!isalpha(key[i]))
            {
                printf("Error: key must be all Alpha characters.\n");
                return 1;
            }

        }
    }
    else
    {
        // Return error message
        printf("Error: Must enter one word after ./test.\n");
        return 1;
    }

    // Get plaintext from user
    plaintext = get_string("plaintext: ");

    // Vigenere Cipher equation is Ci = (Pi + Kj) % 26
    // Ci : ith letter of ciphertext
    // Pi : ith letter of plaintext
    // Kj : jth letter of key

    // Output of ciphertext
    printf("ciphertext: ");

    // Loop through plaintext
    for (int i = 0, keyIndexValue = 0, plainTextLength = strlen(plaintext); i < plainTextLength; i++)
    {
        // check to see if plaintext character is Alpha
        if (isalpha(plaintext[i]))
        {
            // check to see if plaintext character is uppercase and key character is uppercase
            if (isupper(plaintext[i]) && isupper(key[keyIndexValue]))
            {
                // convert character from ascii to alphabetical index and back to ascii
                int cipherUpper = (((plaintext[i] - 'A') + (key[keyIndexValue] - 'A')) % 26) + 'A';

                // print ciphered character
                printf("%c", cipherUpper);

                // increment key index value to continue to next character in key,
                // if key index value is greater than the length, reset back to 0
                if (keyIndexValue > strlen(key) - 2)
                {
                    keyIndexValue = 0;

                }
                else
                {
                    keyIndexValue++;

                }

            }
            // check to see if plaintext character is uppercase and key character is lowercase
            else if (isupper(plaintext[i]) && islower(key[keyIndexValue]))
            {
                // convert character from ascii to alphabetical index and back to ascii
                int cipherUpper = (((plaintext[i] - 'A') + (key[keyIndexValue] - 'a')) % 26) + 'A';

                // print ciphered character
                printf("%c", cipherUpper);

                // increment key index value to continue to next character in key,
                // if key index value is greater than the length, reset back to 0
                if (keyIndexValue > strlen(key) - 2)
                {
                    keyIndexValue = 0;

                }
                else
                {
                    keyIndexValue++;

                }

            }
            // check to see if plaintext character is lowercase and key character is lowercase
            else if (islower(plaintext[i]) && islower(key[keyIndexValue]))
            {
                // convert character from ascii to alphabetical index and back to ascii
                int cipherLower = (((plaintext[i] - 'a') + (key[keyIndexValue] - 'a')) % 26) + 'a';

                // print ciphered character
                printf("%c", cipherLower);

                // increment key index value to continue to next character in key,
                // if key index value is greater than the length, reset back to 0
                if (keyIndexValue > strlen(key) - 2)
                {
                    keyIndexValue = 0;

                }
                else
                {
                    keyIndexValue++;

                }

            }
            // check to see if plaintext character is lowercase and key character is uppercase
            else if (islower(plaintext[i]) && isupper(key[keyIndexValue]))
            {
                // convert character from ascii to alphabetical index and back to ascii
                int cipherLower = (((plaintext[i] - 'a') + (key[keyIndexValue] - 'A')) % 26) + 'a';

                // print ciphered character
                printf("%c", cipherLower);

                // increment key index value to continue to next character in key,
                // if key index value is greater than the length, reset back to 0
                if (keyIndexValue > strlen(key) - 2)
                {
                    keyIndexValue = 0;

                }
                else
                {
                    keyIndexValue++;

                }

            }

        }
        else
        {
            // eprintf("%i",plaintext[i]);
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");

    return 0;
}