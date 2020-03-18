#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp
{

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	//Lab 7 variables
	ofVec2f position;
	ofVec2f direction;
	ofVec2f velocity;
	ofVec2f velocity2;

	ofVec2f v1; 
	ofVec2f v2;
	float dot; //a value of angular relationship
	float mag1; //magnitude1
	float mag2; //magnitude2

	float cos; //cosine 
	float theta; //angle 
	float angle;

};
