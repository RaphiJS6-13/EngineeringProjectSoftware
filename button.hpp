#pragma once

namespace button {
  const int BUTTON_PIN = 1; // this might change
  
  void init() {
    pinMode(BUTTON_PIN, INPUT);
  }
  
  inline bool isPressed() {
    return digitalRead(BUTTON_PIN) == HIGH;
  }
  
  bool waitForPress(void (* callback)())
  {
    while (!isPressed())
      delay(10);
    
    (*callback)();
    
    bool held;
    
    do {
      held = isPressed();
    } while(held);
    
  }
}
