#include <Servo.h>
#include "SwingMachine.hpp"


void setup()
{
	int first = core::START_PIN;
	int last = first + 6; // six motors
	
	for(int pin = first; pin <= last; pin++)
		pinMode(pin, OUTPUT);
	
	core::init();

	for(int i = 0; i < 50; i++) {
		core::run();
	}
	
	core::deinit();
}

// 🙄 
void loop() {}
