// Related Includes
// C Standard Incldues
// C++ Standard Includes
#include <iostream>
// Library Includes
// Project Includes
#include "../cmn/hasher.hpp"

// Prototypes
void printBanner();

////////////////////////////////////////////////////////////////////////////////
/// The beginning of the application.
////////////////////////////////////////////////////////////////////////////////
int main(void) {
  printBanner();

  // Test the hasher
  cmn::Hasher* hasher = new cmn::Hasher();
  unsigned int testCaseNum = 1;
  char* testString = "";
  unsigned char* hash = hasher->sha256(testString);
  unsigned char hashStr[33];
  hashStr[32] = '\0';
  memcpy(hashStr, hash, 32);
  std::cout << ">>>>> Testing Hasher <<<<<"           << std::endl
            << "Test Case #" << testCaseNum++ << ":"  << std::endl 
            << "data=\"" << testString << "\""        << std::endl
            << "hash=" << std::hex << (int[])hash << std::endl;

  // for (int i = 0; i < 32; i++)
  // {
  //     printf("%02x", hash[i]);
  // }

  testString = "The quick brown fox jumps over the lazy dog";
  hash = hasher->sha256(testString);
  std::cout << "Test Case #" << testCaseNum++ << ":"  << std::endl 
            << "data=\"" << testString << "\""        << std::endl
            << "hash=" << std::hex << hash            << std::endl;

  return 0;
}

////////////////////////////////////////////////////////////////////////////////
/// Prints the application banner.
////////////////////////////////////////////////////////////////////////////////
void printBanner() {
  // Generated at textkool.com 
  // Font: Red Phoenix
  // Width: default
  // Height: default
  // NOTE: The font looks incorrect here in the source code because any
  // instances of "\" needed to be preceeded by the escape character "\".
  std::cout << 
      "__________ .__                    __            .__             .__                  \n"
      "\\______   \\|  |    ____    ____  |  | __  ____  |  |__  _____   |__|  ____         \n"
      " |    |  _/|  |   /  _ \\ _/ ___\\ |  |/ /_/ ___\\ |  |  \\ \\__  \\  |  | /    \\   \n"
      " |    |   \\|  |__(  <_> )\\  \\___ |    < \\  \\___ |   Y  \\ / __ \\_|  ||   |  \\ \n"
      " |______  /|____/ \\____/  \\___  >|__|_ \\ \\___  >|___|  /(____  /|__||___|  /     \n"
      "        \\/                    \\/      \\/     \\/      \\/      \\/          \\/   \n"
      ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
}