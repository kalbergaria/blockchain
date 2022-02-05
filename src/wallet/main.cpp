// Related Includes
// C Standard Incldues
// C++ Standard Includes
#include <iostream>
// Library Includes
// Project Includes

// Prototypes
void printBanner();

////////////////////////////////////////////////////////////////////////////////
/// The beginning of the application.
////////////////////////////////////////////////////////////////////////////////
int main(void) {
  printBanner();
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
      " __      __         .__   .__            __         \n"
      "/  \\    /  \\_____   |  |  |  |    ____ _/  |_     \n"
      "\\   \\/\\/   /\\__  \\  |  |  |  |  _/ __ \\\\   __\\ \n"
      " \\        /  / __ \\_|  |__|  |__\\  ___/ |  |     \n"
      "  \\__/\\  /  (____  /|____/|____/ \\___  >|__|     \n"
      "       \\/        \\/                  \\/          \n"
      ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
}