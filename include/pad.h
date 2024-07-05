#ifndef NX_TEST_PAD_H_
#define NX_TEST_PAD_H_

#include <switch.h>

#include "pad_button.h"

class Pad {
 private:
  PadState pad;

 public:
  Pad() {
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);
    padInitializeDefault(&this->pad);
  }
  void Update() { padUpdate(&this->pad); }
  bool ButtonDown(PadButton button) const {
    return button & padGetButtonsDown(&this->pad);
  }
};

#endif  // NX_TEST_PAD_H_