#include <Servo.h>

#pragma once

namespace core {
	Servo * left;
	Servo * back;
	Servo * right;
	
	void init() {
		left = (Servo *) malloc(sizeof(Servo) * 2);
		back = (Servo *) malloc(sizeof(Servo) * 2);
		right = (Servo *) malloc(sizeof(Servo) * 2);
		
		left->attach(5);
		(left+1)->attach(6);
		
		back->attach(7);
		(back+1).attach(8);
		
		right->attach(9);
		(right+1)->attach(10);
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
		swing_back();
		// give it a little time
		delay(200);
		swing_left();
		// give it a little time
		delay(200);
		swing_right();
	}
}
