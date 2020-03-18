#pragma once

#include "ofMain.h"

struct xyPoint {
	int x;
	int y;
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

		xyPoint keyFrame1;
		xyPoint keyFrame2;
		xyPoint keyFrame3;

		xyPoint keyFrame4;//moving keyFrame

		xyPoint controlPoint1;
		xyPoint controlPoint2;

		xyPoint keyFrame; //a keyframe on a spline
		xyPoint keyFrame5; //a keyframe on a spline



		float fn = 0.01;
		int frameCount;

		xyPoint tweenFrames(xyPoint keyFrame1, xyPoint keyFrame2);
		
};
