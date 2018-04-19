//reviewed by LP (4 suggestion)
//**** app is not working correctly. Not passing check50****

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    int key;
    string plaintext;

    // Get key

    // Check to see if user entered key and only two arguments
    if (argc == 2)
    {
        // If two arguments entered and second is a number, convert number entered from string to integer
        key = atoi(argv[1]);
    }
    else
    {
        // Return error message
        printf("Error: Must enter a non negative integer after ./caesar.\n");
        return 1;
    }

    // Get plaintext from user
    plaintext = get_string("plaintext: ");

    // Cipheded text will appear after "ciphertext: "
    printf("ciphertext: ");

    // Loop through plaintext adding key to each character
    for (int i = 0, plainTextLength = strlen(argv[1]); i < plainTextLength; i++)
    {

        // Check to see if character is Alpha or not
        if (isalpha(plaintext[i]))
        {
        //***LP- what do you want to do if you have...** before you open another if. ****

            // If Alpha, check to see if character is uppercase
            if (isupper(plaintext[i]))
            {
                // Convert uppercase character from ASCII to Alphabetical Index

        //**** LP- adding 'A or 'a' computers will recognize as ASCII numbers ****

                int alphaIndexUpper = plaintext[i] + key - 65;
                // Convert from Alpha to Cipher
                int cipheredUpper = alphaIndexUpper % 26 + 65;
                //Print character
                printf("%c", cipheredUpper);

            }
            // If Alpha and not uppercase, character is lowercase
            else
            {
                // Convert lowercase character from ASCII to Alphabetical Index
                int alphaIndexLower = plaintext[i] + key - 97;
                // Convert from Alpha to Cipher
                int cipheredLower = alphaIndexLower % 26 + 97;
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

//**** LP- I believe that "else if" has a better structure to understand when your statements ends.****