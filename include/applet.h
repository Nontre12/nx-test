#ifndef NX_TEST_APPLET_H_
#define NX_TEST_APPLET_H_

#include <switch.h>

namespace nx_test {

class Applet {
 public:
  Applet();
  ~Applet();
  bool MainLoop();
};

Applet::Applet() {}

Applet::~Applet() {}

bool Applet::MainLoop() { return appletMainLoop(); }

}  // namespace nx_test

#endif  // NX_TEST_APPLET_H_