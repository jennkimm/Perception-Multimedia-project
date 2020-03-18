#pragma once

#include "ofMain.h"
#include "ofxMaxim.h"
#include "ofxGui.h"

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
		
		//Maximilian
		int sampleRate;
		int bufferSize;
		void audioOut(float* output, int bufferSize, int nChannels);

		maxiOsc oscillator1;
		maxiOsc oscillator2;

		//sine wave1
		float waveform1[4096];
		int waveIndex1;

		//sine wave2
		float waveform2[4096];
		int waveIndex2;

		//sine wave1 + sinewave2 = sinewave3
		float waveform3[4096];
		int waveIndex3;


		ofParameter<float> frequency1;
		ofParameter<float> amplitude1;
		ofxPanel gui1;

		ofParameter<float> frequency2;
		ofParameter<float> amplitude2;
		ofxPanel gui2;


		int k;


};
