#pragma once

#include "ofMain.h"

//This holds my key frames and control points
struct xyPoint {
	int x;
	int y;
	// It might be nice to make this a class, with a draw() function
};

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		//Variables for moving curve
		xyPoint keyFrame1;
		xyPoint keyFrame2;
		xyPoint controlPoint1;
		xyPoint controlPoint2;
		int frameCount;
		
};
