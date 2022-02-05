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
  "___________                .__                                        \n"
  "\\_   _____/___  _________  |  |    ____ _______   ____ _______       \n"
  " |    __)_ \\  \\/  /\\____ \\ |  |   /  _ \\_  __ \\_/ __ \\_  __ \\ \n"
  " |        \\ >    < |  |_> >|  |__(  <_> )|  | \\/\\  ___/ |  | \\/   \n"
  "/_______  //__/\\_ \\|   __/ |____/ \\____/ |__|    \\___  >|__|      \n"
  "        \\/       \\/|__|                              \\/            \n"
  ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
}