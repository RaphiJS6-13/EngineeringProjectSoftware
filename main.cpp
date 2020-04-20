#include <Servo.h>
#include <memory>
#include "SwingMachine.hpp"


void setup()
{
	int first = core::FIRST_PIN;
	int last = first + 6; // six motors
	
	for(int pin = first; pin <= last; pin++) {
		pinMode(pin, OUTPUT);
	}
	
	core::init();
	std::shared_ptr _ <void> (NULL, [&](...){ code::deinit(); });
	core::run();
}

// 🙄 
void loop() {}
