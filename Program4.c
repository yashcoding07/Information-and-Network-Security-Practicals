#include <stdio.h>

int main() {
    char text[100];
    char encrypted[100];
    char decrypted[100];
    int i;

    // Monoalphabetic key
    char plain[]  = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char cipher[] = "QWERTYUIOPASDFGHJKLZXCVBNM";

    // Input message
    printf("Enter a message: ");
    fgets(text, sizeof(text), stdin);

    // -------- Encryption --------
    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
        {
            encrypted[i] = cipher[text[i] - 'A'];
        }
        else if(text[i] >= 'a' && text[i] <= 'z')
        {
            encrypted[i] = cipher[text[i] - 'a'] + 32;
        }
        else {
            encrypted[i] = text[i]; // space or special character
        }
    }
    encrypted[i] = '\0';

    printf("\nEncrypted Text: %s", encrypted);

    // -------- Decryption --------
    for(i = 0; encrypted[i] != '\0'; i++) {

        if(encrypted[i] >= 'A' && encrypted[i] <= 'Z') {
            int j;
            for(j = 0; j < 26; j++) {
                if(encrypted[i] == cipher[j])
                {
                    decrypted[i] = plain[j];
                    break;
                }
            }
        }
        else if(encrypted[i] >= 'a' && encrypted[i] <= 'z') {
            int j;
            for(j = 0; j < 26; j++) {
                if(encrypted[i] == cipher[j] + 32) {
                    decrypted[i] = plain[j] + 32;
                    break;
                }
            }
        }
        else {
            decrypted[i] = encrypted[i];
        }
    }
    decrypted[i] = '\0';

    printf("Decrypted Text: %s", decrypted);

    return 0;
}
