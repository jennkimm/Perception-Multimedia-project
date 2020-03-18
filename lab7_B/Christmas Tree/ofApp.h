#pragma once

#include "ofMain.h"

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
		
		//3d tree
		ofConePrimitive cone1;
		ofConePrimitive cone2;
		ofConePrimitive cone3;
		ofCylinderPrimitive cylinder1;
		ofSpherePrimitive orn1;
		ofSpherePrimitive orn2;
		ofSpherePrimitive orn3;


		float axisY; //rotation axis

		ofLight light; //light

		// add mouse controls for camera movement  
		ofEasyCam cam;
};
