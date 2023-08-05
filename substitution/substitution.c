#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool is_valid_key(string key);
void encrypt(string plaintext, string key);

int main(int argc, string argv[])
{
    // Check the number of command-line arguments
    if (argc != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string key = argv[1];
    // Validate the key
    if (!is_valid_key(key)) {
        printf("Key must contain 26 unique alphabetic characters.\n");
        return 1;
    }

    string plaintext = get_string("plaintext: ");
    // Encrypt the plaintext
    encrypt(plaintext, key);

    return 0;
}

bool is_valid_key(string key)
{
    int length = strlen(key);

    // Check the key length
    if (length != 26) {
        return false;
    }

    for (int i = 0; i < length; i++) {
        // Check if each character is an alphabetic character
        if (!isalpha(key[i])) {
            return false;
        }

        // Check for duplicate characters in the key
        for (int j = i + 1; j < length; j++) {
            if (toupper(key[i]) == toupper(key[j])) {
                return false;
            }
        }
    }

    return true;
}

void encrypt(string plaintext, string key)
{
    int length = strlen(plaintext);
    char ciphertext[length + 1];

    for (int i = 0; i < length; i++) {
        char c = plaintext[i];

        if (isalpha(c)) {
            int index = toupper(c) - 'A';
            char substitution = key[index];

            // Preserve the casing of the characters
            if (islower(c)) {
                ciphertext[i] = tolower(substitution);
            } else {
                ciphertext[i] = toupper(substitution);
            }
        } else {
            // Copy non-alphabetic characters as they are
            ciphertext[i] = c;
        }
    }

    ciphertext[length] = '\0';
    printf("ciphertext: %s\n", ciphertext);
}
