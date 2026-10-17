
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // check if it has two command line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // check if the argument is a non-empty string of integer
    if (strlen(argv[1]) == 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // convert the string of integer to an actual integer
    int key = atoi(argv[1]);

    // get plaintext from the user
    string plaintext = get_string("Plaintext: ");

    // loop through to check if it's an alpha, lowercase or uppercase
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (islower(plaintext[i]))
            {
                // using caesar cipher formula
                plaintext[i] = ((plaintext[i] - 'a') + key) % 26 + 'a';
            }
            else if (isupper(plaintext[i]))
            {
                plaintext[i] = ((plaintext[i] - 'A') + key) % 26 + 'A';
            }
        }
    }

    printf("Ciphertext: %s\n", plaintext);
}

