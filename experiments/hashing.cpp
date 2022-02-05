// Related Includes
// C Standard Incldues
// C++ Standard Includes
#include <iostream>
// Library Includes
// Project Includes
#include "../src/cmn/hasher.h"

////////////////////////////////////////////////////////////////////////////////
/// A simple example of how the hashing mechanism is used.
////////////////////////////////////////////////////////////////////////////////
int main(void) {
  std::cout << std::endl
      << "////////////////////////////////////////////////////////" << std::endl
      << "/// Starting Test" << std::endl
      << "////////////////////////////////////////////////////////" << std::endl
      << std::endl;

  // NOTE: Be careful with the null terminator when hashing c-style strings.
  char testData[3];
  testData[0] = 'a';
  testData[1] = 'b';
  testData[2] = 'c';

  std::cout << "Expected SHA-256 Result:" << std::endl
      << "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad"
      << std::endl
      << std::endl;

  Hasher* hasher = new Hasher();
  Hasher->hash(testData, 3);
  std::cout << "Result:" << std::endl;
  Hasher->printHexHash();

  std::cout << std::endl
      << "////////////////////////////////////////////////////////" << std::endl
      << "/// Concluding Test" << std::endl
      << "////////////////////////////////////////////////////////" << std::endl
      << std::endl;

  return 0;
}