#ifndef NX_TEST_CONSOLE_H_
#define NX_TEST_CONSOLE_H_

#include <switch.h>

class Console {
 public:
  Console() { consoleInit(nullptr); }
  ~Console() { consoleExit(nullptr); }
  void Update() { consoleUpdate(nullptr); }
};

#endif  // NX_TEST_CONSOLE_H_