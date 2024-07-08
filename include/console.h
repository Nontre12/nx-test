#ifndef NX_TEST_CONSOLE_H_
#define NX_TEST_CONSOLE_H_

#include <switch.h>

namespace nx_test {

class Console {
 public:
  Console();
  ~Console();
  void Update();
  void Clear();
};

Console::Console() { consoleInit(nullptr); }

Console::~Console() { consoleExit(nullptr); }

void Console::Update() { consoleUpdate(nullptr); }

void Console::Clear() { consoleClear(); }

}  // namespace nx_test

#endif  // NX_TEST_CONSOLE_H_