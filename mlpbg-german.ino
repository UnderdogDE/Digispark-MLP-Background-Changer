#include "DigiKeyboardDe.h"
#define KEY_UP_ARROW     0x52
#define KEY_DOWN_ARROW   0x51
#define KEY_LEFT_ARROW   0x50
#define KEY_RIGHT_ARROW  0x4F
#define KEY_LEFT_GUI     0xE3
#define KEY_ESC          0x29
#define KEY_HOME         0x4A
#define KEY_INSERT       0x49
#define KEY_NUM_LOCK     0x53
#define KEY_SCROLL_LOCK  0x47
#define KEY_CAPS_LOCK  0x39
#define KEY_TAB          0x2B

void digiBegin() {
  DigiKeyboardDe.sendKeyStroke(0,0);
  DigiKeyboardDe.delay(50);
}

void digiEnd() {
  const int led=1;
  pinMode(led, OUTPUT);
  while (1) {
    digitalWrite(led, !digitalRead(led));
    DigiKeyboardDe.delay(1000);
  }
}

void printText(fstr_t *txt) {
  DigiKeyboardDe.print(txt);
  DigiKeyboardDe.update();
}

void setup() {
  digiBegin();
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(200);
  printText(F("https://scripts.underdogde.de/changebg/owo.png"));
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(4000);
  DigiKeyboardDe.sendKeyStroke(KEY_C, MOD_CONTROL_LEFT);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(200);
  printText(F("mspaint"));
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
  DigiKeyboardDe.delay(200);
  printText(F("%USERPROFILE%\\DESKTOP\\owo.jpg"));
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(200);
  printText(F("%USERPROFILE%\\DESKTOP\\owo.jpg"));
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_RIGHT_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  digiEnd();
}

/* Unused endless loop */
void loop() {}
