#ifndef NX_TEST_APPLET_H_
#define NX_TEST_APPLET_H_

#include <switch.h>

class Applet {
 public:
  Applet() {}
  ~Applet() {}
  bool MainLoop() { return appletMainLoop(); }
};

#endif  // NX_TEST_APPLET_H_