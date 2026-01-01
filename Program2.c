#include <stdio.h>

int main() {

    char c[100];
    int key, i;

    printf("Enter the message: ");
    scanf("%s", c);

    printf("Enter the key: ");
    scanf("%d", &key);

    for(i = 0; c[i] != '\0'; i++){
        c[i] = c[i] ^ key;
    }

    printf("\nEncrypted message: %s", c);

    for(i = 0; c[i] != '\0'; i++){
        c[i] = c[i] ^ key;
    }

    printf("\nDecrypted message: %s", c);

    return 0;
}