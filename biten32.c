#include <string.h>
#include "headers/biten32.h"

void biten32_encrypt(char string[], size_t string_length, __uint32_t index_variation, __int16_t base_key, int encryption_buffer[]) {
    for (int i = 0; i < string_length; i++) {
        int dynamic_key = base_key + (i * index_variation);
        encryption_buffer[i] = string[i] ^ dynamic_key;
    }
}

void biten32_decrypt(int encrypted_string[], size_t string_length, __uint32_t index_variation, __int16_t base_key, char decryption_buffer[]) {
    for (int i = 0; i < string_length; i++) {
        int dynamic_key = base_key + (i * index_variation);
        decryption_buffer[i] = encrypted_string[i] ^ dynamic_key;
    }
}