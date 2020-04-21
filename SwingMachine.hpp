#include <Servo.h>

#pragma once

namespace core {
	const int START_PIN = 8;
	Servo * left;
	Servo * back;
	Servo * right;
	
	void init() {
		left = (Servo *) malloc(sizeof(Servo) * 2);
		back = (Servo *) malloc(sizeof(Servo) * 2);
		right = (Servo *) malloc(sizeof(Servo) * 2);
		
		left->attach(START_PIN);
		(left+1)->attach(START_PIN + 1);
		
		back->attach(START_PIN + 2);
		(back+1)->attach(START_PIN + 3);
		
		right->attach(START_PIN + 4);
		(right+1)->attach(START_PIN + 5);
	}
	
	void deinit() {
		free(left);
		free(back);
		free(right);
	}
	
	void swing_left() {
		left->write(180);
		(left+1)->write(0);
		delay(1000);
		left->write(0);
		(left+1)->write(180);
		delay(1000);
	}
	
	void swing_back() {
		back->write(180);
		(back+1)->write(0);
		delay(1000);
		back->write(0);
		(back+1)->write(180);
		delay(1000);
	}
	
	void swing_right() {
		right->write(180);
		(right+1)->write(0);
		delay(1000);
		right->write(0);
		(right+1)->write(180);
		delay(1000);
	}
	
	void run() {
                const auto pause = 500;
		swing_back();
		// give it a little time
		delay(pause);
		swing_left();
		// give it a little time
		delay(pause);
		swing_right();
	}
}
