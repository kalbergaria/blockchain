// Related Includes
#include "hasher.hpp"
// C Standard Incldues
#include <cstdlib>
// C++ Standard Includes
#include <iostream>
// Library Includes
// Project Includes

namespace cmn {

////////////////////////////////////////////////////////////////////////////////
/// See header file for details.
////////////////////////////////////////////////////////////////////////////////
Hasher::Hasher() {
  // Create message digest context
  gcry_error_t error = gcry_md_open(&sha256Context, GCRY_MD_SHA256, 
      GCRY_MD_FLAG_SECURE);
  if (error) {
    fprintf(stderr, "ERROR: Unable to construct Hasher: %s/%s\n", 
        gcry_strsource(error), gcry_strerror(error));
  }
}

////////////////////////////////////////////////////////////////////////////////
/// See header file for details.
////////////////////////////////////////////////////////////////////////////////
unsigned char* Hasher::sha256(const char* const data) {
// TODO: pass in where to store hash, and make this function return a char 
// array witht the hex hash
// TODO: Write units tests using google test

  // Perform the hash operation.
  gcry_md_write(sha256Context, data, strlen(data));
  // Read the resulting hash.
  return gcry_md_read(sha256Context, GCRY_MD_SHA256);

    for (int i = 0; i < 32; i++) {
    std::cout << std::hex << hash[i];
  }
}

}  // namespace cmn