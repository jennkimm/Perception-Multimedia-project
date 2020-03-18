#pragma once

#include "ofMain.h"
#include "ofxMaxim.h"

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

	//Maximilian
	int sampleRate;
	int bufferSize;
	void audioOut(float * output, int bufferSize, int nChannels);
	//1
	maxiOsc oscillator1;

	float frequency1;
	float amplitude1;

	float waveform1[4096]; //make this bigger, just in case
	int waveIndex1;

	//2
	maxiOsc oscillator2;

	float frequency2;
	float amplitude2;

	float waveform2[4096]; //make this bigger, just in case
	int waveIndex2;

	//3
	float waveform3[4096]; //make this bigger, just in case
	int waveIndex3;

	int k;
};
