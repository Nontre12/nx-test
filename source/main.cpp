#include <iostream>
#include <string>

#include "applet.h"
#include "console.h"
#include "pad.h"

using namespace nx_test;

int main(int argc, char *argv[]) {
  Applet applet;
  Console console;
  Pad pad;

  while (applet.MainLoop()) {
    console.Clear();
    pad.Update();

    std::cout << "Hello World!" << std::endl;

    if (pad.ButtonDown(PadButton::kPlus)) {
      break;
    }

    console.Update();
  }

  pad.~Pad();
  console.~Console();
  applet.~Applet();

  return 0;
}