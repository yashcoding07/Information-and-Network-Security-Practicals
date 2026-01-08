// Caesar Cipher: plain text conversion to cipher text, encryption and decryption
#include <stdio.h>

int main(){

    char text[100];
    int key;
    char ch;

    printf("Enter the text you want to encrypt: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the key: ");
    scanf("%d", &key);

    for(int i = 0; text[i] != '\0'; i++){
        ch = text[i];
        if(ch >= 'a' && ch <= 'z'){
            text[i] = (ch - 'a' + key) % 26 + 'a';
        }else if(ch >= 'A' && ch <= 'Z'){
            text[i] = (ch - 'A' + key) % 26 + 'A';
        }
    }

    printf("\nEncrypted text: %s", text);

        for(int i = 0; text[i] != '\0'; i++){
        ch = text[i];
        if(ch >= 'a' && ch <= 'z'){
            text[i] = (ch - 'a' - key + 26) % 26 + 'a';
        }else if(ch >= 'A' && ch <= 'Z'){
            text[i] = (ch - 'A' - key + 26) % 26 + 'A';
        }
    }

    printf("\nDecrypted text: %s", text);

    return 0;
}