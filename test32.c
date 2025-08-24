#include <stdio.h>
#include "headers/biten32.h"

int main(void) {
    char msg[] = "hello world!";
    size_t msg_length = sizeof(msg) / sizeof(msg[0]);
    int buffer[100];

    char decryption_buffer[100];
    size_t buffer_length = sizeof(decryption_buffer) / sizeof(decryption_buffer[0]);

    biten32_encrypt(msg, msg_length, 25, 0523, buffer);

    for (int i = 0; i < msg_length; i++) {
        if (i == msg_length - 1) printf("%d\n", buffer[i]);
        else printf("%d ", buffer[i]);
    }

    puts("");

    biten32_decrypt(buffer, buffer_length, 25, 0523, decryption_buffer);

    for (int i = 0; i < msg_length; i++) {
        if (i == msg_length - 1) printf("%c\n", decryption_buffer[i]);
        else printf("%c", decryption_buffer[i]);
    }
}