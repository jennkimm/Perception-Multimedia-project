#include "dot.h"

dot::dot()
{
	location.set(ofGetWidth() / 2, ofGetHeight() / 2);
	velocity.set(10, -10);
	acceleration.set(0, 0.58);
	diameter = 40;
}

dot::~dot()
{
}


void dot::run()
{
	dot::draw();
	dot::move();
}

void dot::draw()
{
	ofSetColor(0, 128, 255);
	ofFill();
	ofDrawEllipse(location.x, location.y, diameter, diameter);
}

void dot::move()
{
	//velocity.set(ofGetMouseX(), ofGetMouseY()); //instead of set the velocity in dot::dot()
	velocity = velocity + acceleration;
	location = location + velocity;
	drawTrace(location);
}

void dot::getP()
{
	velocity.set(ofGetMouseX(), ofGetMouseY());
}

void dot::drawTrace(ofVec2f& loc) {
	ofSetColor(0);
	ofDrawCircle(loc, 5);
}

