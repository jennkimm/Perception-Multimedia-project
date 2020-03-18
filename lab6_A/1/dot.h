#pragma once

#ifndef dot_h
#define dot_h

#include "ofMain.h"

class dot {
public:
	dot();
	~dot();

	void run();
	void draw();
	void move();
	void getP();
	void drawTrace(ofVec2f& loc);

private:
	ofVec2f velocity; //These are a 2-dimensional vector
	ofVec2f location;
	ofVec2f acceleration;
	int diameter;
};


#endif /* dot_h */
