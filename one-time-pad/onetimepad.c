#include "onetimepad.h"

#include <stdio.h>
#include <stdlib.h>

// load a key from a file
// returns:
//      0 - successful
//      1 - failed
int otp_load_key(struct otp_system* crypto, char* filepath) {
    FILE *file_ptr = fopen(filepath, "r");
    if(file_ptr == NULL) {
        // could not read file
        fprintf(stderr, "\nError while opening the file\n");
        return 1;
    }

    crypto->key = file_ptr;
    return 0;
}

// decode byte using key,
// updates the key while doing so
byte otp_decode_byte(struct otp_system* crypto, byte encrypted) {
    // TODO:
}

// encode byte using key
// saves the encoded byte to dest
// and updates the key while doing so
// 
int otp_encode_byte(struct otp_system* crypto, byte content, byte* dest) {
    byte key_byte;
    size_t read = fread(&key_byte, sizeof(byte), 1, crypto->key);

    if(read == 0) return 1;

    *dest = content ^ key_byte;
    return 1;
}

// close the file opened as a key
void otp_close_key(struct otp_system* crypto) {
    fclose(crypto->key);
}
