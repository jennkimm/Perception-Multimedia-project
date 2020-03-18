#include "spring.h"

spring::spring() {
	//left = ofGetWidth() / 2 - 100;
	right = ofGetWidth() / 2 + 100;

	ps = R;   // Position
	vs = 0.0; // Velocity
	as = 0;   // Acceleration
	f = 0;    // Force
}
spring::~spring() {

}

void spring::updateSpring(float M, float D, float R) {
	// Update the spring position
	if (!move) {
		f = -K * (ps - R); // f=-ky
		as = f / M;          // Set the acceleration, f=ma == a=f/m
		vs = D * (vs + as);  // Set the velocity
		ps = ps + vs;        // Updated position
	}

	if (vs < 0.1) {
		vs = 0.0;
	}

	// Test if mouse if over the top bar
	if (ofGetMouseX() > left && ofGetMouseX() < right && ofGetMouseY() > ps && ofGetMouseY() < ps + springHeight) {
		over = true;
	}
	else {
		over = false;
	}

	// Set and constrain the position of top bar
	if (move) {
		ps = ofGetMouseY() - springHeight / 2;
		ps = ofClamp(ps, minHeight, maxHeight);
	}


}

void spring::updateBaseWidth(float loc) {
	baseWidth = 0.5 * ps + -8 -loc;
}

void spring::drawSpring() {
	// Draw base
	ofSetColor(0.2, 0.2, 0.2);
	ofFill();
	//float baseWidth = 0.5 * ps + -8;
	//std::cout << "baseWidth: "<<baseWidth <<"\n"<< std::endl;
	ofDrawRectangle(ofGetWidth() / 2 - baseWidth, ps + springHeight, (0.5 * ps + -8) * 2, ofGetHeight());
	//ofDrawRectangle(x, y, baseWidth * 2, ofGetHeight());

	// Set color and draw top bar
	if (over || move) {
		ofSetColor(255, 255, 255);
	}
	else {
		ofSetColor(220, 220, 220);
	}
	ofDrawRectangle(left, ps, 200, springHeight);
}