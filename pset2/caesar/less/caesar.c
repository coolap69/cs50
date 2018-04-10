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

    // Check to see if user entered key
    if (argc == 2)
    {
        key = atoi(argv[1]);
        printf("%d\n", key);
    }
    else
    {
        printf("Error: Must enter a non negative integer after ./caesar.\n");
        return 1;
    }

    // Get plaintext from user
    plaintext = get_string("plaintext: ");

    // Output ciphertext from user
    printf("ciphertext: ");

    // Loop through plaintext adding key to each character
    for (int i = 0; i < strlen(plaintext); i++)
    {
        printf("%c", plaintext[i] + key);
    }
    printf("\n");

    return 0;
}