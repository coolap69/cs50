#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    int keyInt;
    int keysUpper[100];
    int keysLower[100];
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
                printf("Error: key must be all Alpha characters.");
            }

        }
        printf("%s\n", key);
    }
    else
    {
        // Return error message
        printf("Error: Must enter one word after ./caesar.\n");
        return 1;
    }

    keyInt = atoi(key);
    // printf("%d\n", keyInt);

    // Get Alphabet Index of key
    // Going through these loops 3 times
    for (int j = 0; j < strlen(key); j++)
    {
        if (isupper(key[j]))
        {
            int keyAlphaIndexUpper = key[j] - 65;
            for (int k = 0; k < strlen(key); k++)
            {
                keysUpper[k] = keyAlphaIndexUpper;
                printf("keysUpper[%i] = %i\n", k, keyAlphaIndexUpper);
            }
            // printf("%i\n", keyAlphaIndexUpper);
        }
        else if (islower(key[j]))
        {
            int keyAlphaIndexLower = key[j] - 97;
            for (int k = 0; k < strlen(key); k++)
            {
                keysLower[k] = keyAlphaIndexLower;
                printf("keysLower[%i] = %i\n", k, keyAlphaIndexLower);
            }
            // printf("%i\n", keyAlphaIndexLower);
        }

    }

    // Get plaintext from user
    plaintext = get_string("plaintext: ");

    // Cipheded text will appear after "ciphertext: "

    printf("ciphertext: ");

    // Loop through plaintext adding key to each character
    for (int i = 0; i < strlen(plaintext); i++)
    {

        // Check to see if character is Alpha or not
        if (isalpha(plaintext[i]))
        {
            // If Alpha, check to see if character is uppercase
            if (isupper(plaintext[i]))
            {
                // Convert uppercase character from ASCII to Alphabetical Index
                // int alphaIndexUpper = plaintext[i] + keyInt - 65;
                // Convert from Alpha to Cipher
                int cipheredUpper = plaintext[i] + keysUpper[0];
                //Print character
                printf("%c", cipheredUpper);

            }
            // If Alpha and not uppercase, character is lowercase
            else
            {
                // Convert lowercase character from ASCII to Alphabetical Index
                // int alphaIndexLower = plaintext[i] + keyInt - 97;
                // Convert from Alpha to Cipher
                int cipheredLower = plaintext[i] + keysLower[0];
                // Print character
                printf("%c", cipheredLower);
            }
        }
        // If not an Alpha character, no need to convert
        else
        {
            // Print character
            printf("%c", plaintext[i]);
        }

    }
    // Print new line after printing out all text
    printf("\n");

    // Program ran successfully
    return 0;
}