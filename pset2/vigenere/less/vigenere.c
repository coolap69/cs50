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

        // Check each character in the string to see is it is an Alpha character
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

    for (int i = 0, keyIndexValue = 0; i <= strlen(plaintext); i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]) && isupper(key[keyIndexValue]))
            {
                int cipherUpper = (((plaintext[i] - 'A') + (key[keyIndexValue] - 'A')) % 26) + 'A';
                printf("%c", cipherUpper);
                if (keyIndexValue > strlen(plaintext))
                {
                    keyIndexValue = 0;

                }
                else
                {
                    keyIndexValue++;

                }

            }
            else if (isupper(plaintext[i]) && islower(key[keyIndexValue]))
            {
                int cipherUpper = (((plaintext[i] - 'A') + (key[keyIndexValue] - 'a')) % 26) + 'A';
                printf("%c", cipherUpper);
                if (keyIndexValue > strlen(plaintext))
                {
                    keyIndexValue = 0;

                }
                else
                {
                    keyIndexValue++;

                }

            }
            else if (islower(plaintext[i]) && islower(key[keyIndexValue]))
            {
                int cipherLower = (((plaintext[i] - 'a') + (key[keyIndexValue] - 'a')) % 26) + 'a';
                printf("%c", cipherLower);
                if (keyIndexValue > strlen(plaintext))
                {
                    keyIndexValue = 0;

                }
                else
                {
                    keyIndexValue++;

                }

            }
            else if (islower(plaintext[i]) && isupper(key[keyIndexValue]))
            {
                int cipherLower = (((plaintext[i] - 'a') + (key[keyIndexValue] - 'A')) % 26) + 'a';
                printf("%c", cipherLower);
                if (keyIndexValue > strlen(plaintext))
                {
                    keyIndexValue = 0;

                }
                else
                {
                    keyIndexValue++;
                    // break;

                }

            }

        }

    }
    printf("\n");
}