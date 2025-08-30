#include <string.h>
#include "headers/biten64.h"

void biten64_encrypt(const char *string, size_t string_length, __uint64_t index_variation, int base_key, int *encryption_buffer) {
    for (int i = 0; i < string_length; i++) {
        int dynamic_key = base_key + (i * index_variation);
        encryption_buffer[i] = string[i] ^ dynamic_key;
    }
}

void biten64_decrypt(const int *encrypted_string, size_t string_length, __uint64_t index_variation, int base_key, char *decryption_buffer) {
    for (int i = 0; i < string_length; i++) {
        int dynamic_key = base_key + (i * index_variation);
        decryption_buffer[i] = encrypted_string[i] ^ dynamic_key;
    }
}