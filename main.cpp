#include <Servo.h>
#include "SwingMachine.hpp"


void setup() {
	for (int count = (int) FIRSTPIN; count < (int) FIRSTPIN + 7; count++) {
		pinMode(count, OUTPUT);
	}
	core::init();
	core::run();
	core::deinit();
}

// 🙄 
void loop() {}
