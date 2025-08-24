#ifndef BITEN64_H
#define BITEN64_H

#include <stdio.h>

// __uint64_t {  0 ~ (2^{64}-1)  }

void biten64_encrypt(char string[], size_t string_length,__uint64_t index_variation, int base_key, int encryption_buffer[]);
void biten64_decrypt(int encrypted_string[], size_t string_length, __uint64_t index_variation, int base_key, char decryption_buffer[]);

#endif // BITEN64_H