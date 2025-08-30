#ifndef BITEN32_H
#define BITEN32_H

#include <stddef.h>
#include <stdio.h>

// __int16_t  { -32,768 ~ 32,767 }
// __uint32_t {  0 ~ (2^{32}-1)  } 

void biten32_encrypt(const char *string, size_t string_length, __uint32_t index_variation, __int16_t base_key, int *encryption_buffer);
void biten32_decrypt(const int *encrypted_string, size_t string_length, __uint32_t index_variation, __int16_t base_key, char *decryption_buffer);
 
#endif // BITEN32_H