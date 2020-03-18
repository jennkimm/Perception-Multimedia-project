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

	// add mouse controls for camera movement  
	ofEasyCam cam;

	//	3d primitives
	ofBoxPrimitive box;
	ofBoxPrimitive arm1;
	ofBoxPrimitive arm2;
	ofBoxPrimitive leg1;
	ofBoxPrimitive leg2;
	ofSpherePrimitive sphere;

	ofVec3f a;
	ofVec3f b;
	ofVec3f c; //cross product

	float axisY; //rotation axis
	ofLight light; //light
};
