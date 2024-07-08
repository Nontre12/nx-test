#ifndef NX_TEST_PAD_H_
#define NX_TEST_PAD_H_

#include <switch.h>

#include "pad_button.h"

namespace nx_test {

class Pad {
 private:
  PadState pad;

 public:
  Pad();
  void Update();
  bool ButtonDown(PadButton button) const;
};

Pad::Pad() {
  padConfigureInput(1, HidNpadStyleTag::HidNpadStyleSet_NpadStandard);
  padInitializeDefault(&this->pad);
}

void Pad::Update() { padUpdate(&this->pad); }

bool Pad::ButtonDown(PadButton button) const {
  return button & padGetButtonsDown(&this->pad);
}

}  // namespace nx_test

#endif  // NX_TEST_PAD_H_