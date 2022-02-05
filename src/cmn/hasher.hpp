#ifndef CMN_HASHER_H_
#define CMN_HASHER_H_

// Related Includes
// C Standard Incldues
// C++ Standard Includes
// Library Includes
#include <gcrypt.h>
// Project Includes

namespace cmn {

class Hasher {
 public:
  /// Number of bytes in a SHA-256 hash (A.K.A. message digest).
  static const unsigned short kSha256HashLength = 32 + 1;

  //////////////////////////////////////////////////////////////////////////////
  /// Default constructor.
  //////////////////////////////////////////////////////////////////////////////
  Hasher();

  //////////////////////////////////////////////////////////////////////////////
  /// Computes the sha256 hash of the provided data.
  /// @param data the data to be hashed
  /// @param hash where the result of the hash operation will be stored
  //////////////////////////////////////////////////////////////////////////////
  unsigned char* sha256(const char* const data);
  
 private:
  /// SHA-256 message digest context.
  gcry_md_hd_t sha256Context;
};

}  // namespace cmn

#endif  // CMN_HASHER_H_