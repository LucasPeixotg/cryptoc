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
byte otp_decode_byte(struct otp_system*, byte encrypted) {
    // TODO:
}

// encode byte using key
// updates the key while doing so
byte otp_encode_byte(struct otp_system*, byte content);
