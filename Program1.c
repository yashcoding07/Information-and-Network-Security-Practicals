// Caesar Cipher text conversion, encryption and decryption
#include <stdio.h>

int main() {

    char text[100];
    int key;

    printf("Enter text: ");
    scanf("%[^\n]", text); // "%[^\n] reads the complete data entered till the new line."

    printf("Enter Key: ");
    scanf("%d", &key);

    // Encryption
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] >= 'a' && text[i] <= 'z'){
            text[i] = text[i] + key;
        }else if(text[i] >= 'A' && text[i] <= 'Z'){
            text[i] = text[i] + key;
        }
    }

    printf("\nEncrypted Text: %s\n", text);

    // Decrypted Text

    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] >= 'a' && text[i] <= 'z'){
            text[i] = text[i] - key;
        }else if(text[i] >= 'A' && text[i] <= 'Z'){
            text[i] = text[i] - key;
        }
    }

    printf("Decrypted Text: %s", text);

    return 0;
}