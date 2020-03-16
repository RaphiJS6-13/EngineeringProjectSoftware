#include <Servo.h>
#include "SwingMachine.hpp"


void setup()
{
	int first = (int) core::FIRST_PIN; // `int' and `const int' are incompatible
	int last = first + 6; // six motors
	
	for(int pin = first; pin <= last; pin++) {
		pinMode(pin, OUTPUT);
	}
	
	core::init();
	core::run();
	core::deinit();
}

// 🙄 
void loop() {}
