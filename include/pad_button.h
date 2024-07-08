#ifndef NX_TEST_PAD_BUTTON_H_
#define NX_TEST_PAD_BUTTON_H_

#include <switch.h>

namespace nx_test {

enum PadButton {
  kA = HidNpadButton::HidNpadButton_A,
  kB = HidNpadButton::HidNpadButton_B,
  kX = HidNpadButton::HidNpadButton_X,
  kY = HidNpadButton::HidNpadButton_Y,
  kStickL = HidNpadButton::HidNpadButton_StickL,
  kStickR = HidNpadButton::HidNpadButton_StickR,
  kL = HidNpadButton::HidNpadButton_L,
  kR = HidNpadButton::HidNpadButton_R,
  kZL = HidNpadButton::HidNpadButton_ZL,
  kZR = HidNpadButton::HidNpadButton_ZR,
  kPlus = HidNpadButton::HidNpadButton_Plus,
  kMinus = HidNpadButton::HidNpadButton_Minus,
  kLeft = HidNpadButton::HidNpadButton_Left,
  kUp = HidNpadButton::HidNpadButton_Up,
  kRight = HidNpadButton::HidNpadButton_Right,
  kDown = HidNpadButton::HidNpadButton_Down,
  kStickLLeft = HidNpadButton::HidNpadButton_StickLLeft,
  kStickLUp = HidNpadButton::HidNpadButton_StickLUp,
  kStickLRight = HidNpadButton::HidNpadButton_StickLRight,
  kStickLDown = HidNpadButton::HidNpadButton_StickLDown,
  kStickRLeft = HidNpadButton::HidNpadButton_StickRLeft,
  kStickRUp = HidNpadButton::HidNpadButton_StickRUp,
  kStickRRight = HidNpadButton::HidNpadButton_StickRRight,
  kStickRDown = HidNpadButton::HidNpadButton_StickRDown,
  kLeftSL = HidNpadButton::HidNpadButton_LeftSL,
  kLeftSR = HidNpadButton::HidNpadButton_LeftSR,
  kRightSL = HidNpadButton::HidNpadButton_RightSL,
  kRightSR = HidNpadButton::HidNpadButton_RightSR,
  kPalma = HidNpadButton::HidNpadButton_Palma,
  kVerification = HidNpadButton::HidNpadButton_Verification,
  kHandheldLeftB = HidNpadButton::HidNpadButton_HandheldLeftB,
  kLagonCLeft = HidNpadButton::HidNpadButton_LagonCLeft,
  kLagonCUp = HidNpadButton::HidNpadButton_LagonCUp,
  kLagonCRight = HidNpadButton::HidNpadButton_LagonCRight,
  kLagonCDown = HidNpadButton::HidNpadButton_LagonCDown,
  kAnyLeft = HidNpadButton::HidNpadButton_AnyLeft,
  kAnyUp = HidNpadButton::HidNpadButton_AnyUp,
  kAnyRight = HidNpadButton::HidNpadButton_AnyRight,
  kAnyDown = HidNpadButton::HidNpadButton_AnyDown,
  kAnySL = HidNpadButton::HidNpadButton_AnySL,
  kAnySR = HidNpadButton::HidNpadButton_AnySR,
};

}  // namespace nx_test

#endif  // NX_TEST_PAD_BUTTON_H_