#include <iostream>
#include <string>

#include "applet.h"
#include "console.h"
#include "pad.h"

int main(int argc, char *argv[]) {
  Applet applet;
  Console console;
  Pad pad;

  std::cout << "Hello World!" << std::endl;

  while (applet.MainLoop()) {
    pad.Update();

    if (pad.ButtonDown(PadButton::PadButton_Plus)) {
      break;
    }

    console.Update();
  }

  pad.~Pad();
  console.~Console();
  applet.~Applet();

  return 0;
}