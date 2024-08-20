#include "onetimepad.h"

// load a key from a file
// returns:
//      0 - successful
//      1 - failed
int otp_load_key_from_file(struct otp_system*, char* filepath);

// decode byte using key,
// updates the key while doing so
byte otp_decode_byte(struct otp_system*, byte encrypted);

// encode byte using key
// updates the key while doing so
byte otp_encode_byte(struct otp_system*, byte content);
