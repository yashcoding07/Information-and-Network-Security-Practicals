// The XOR operation converts the message into binary and then XOR it with the key which converts the plain text to cipher text and doing the same operation again converts the cipher text back to plain text.  
#include <stdio.h>

int main() {

    char c[100];
    int key, i;

    printf("Enter the message: ");
    scanf("%s", c);

    printf("Enter the key: ");
    scanf("%d", &key);

    // Encryption using XOR operator
    for(i = 0; c[i] != '\0'; i++){
        c[i] = c[i] ^ key;
    }

    printf("\nEncrypted message: %s", c);

    // Decryption using the same XOR operation
    for(i = 0; c[i] != '\0'; i++){
        c[i] = c[i] ^ key;
    }

    printf("\nDecrypted message: %s", c);

    return 0;
}