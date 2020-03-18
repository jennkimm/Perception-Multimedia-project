#pragma once

#ifndef spring_h
#define spring_h

#include "ofMain.h"

class spring {
public:
	spring();
	~spring();
	//functions for spring
	void updateSpring(float M, float D, float R);
	void drawSpring();
	bool over = false;
	bool move = false;
	int left;
	int right;
	float baseWidth;
	void updateBaseWidth(float loc);
	int springHeight = 32;
	float ps;  // Position

private:
	// Variables for spring

	//int left;
	//int right;
	int maxHeight = 200;
	int minHeight = 100;

	// Spring simulation constants
	float M;  // Mass
	float K = 0.2;  // Spring constant
	float D; // Damping
	float R;  // Rest position

	// Spring simulation variables
	//float ps;  // Position
	float vs; // Velocity
	float as;   // Acceleration
	float f;    // Force

};

#endif /* spring_h */