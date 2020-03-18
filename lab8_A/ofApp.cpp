#include "ofApp.h"
#include "math.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update() {
	
}

//--------------------------------------------------------------
void ofApp::draw() {

	//Move down to the center of the window
	ofTranslate(0, 250);

	//Draw the centre line at y=0:
	ofSetColor(0, 0, 0);
	ofFill();
	for (int t = 0; t < 500; ++t) {
		ofDrawCircle(t, 0, 1);
	}

	//Now draw the three sine curves:
	//Draw the first sine in red:
	ofSetColor(255, 0, 0);
	for (int t = 0; t < 500; ++t) {
		float sin1_t = 100*sin(TWO_PI * t * 1 / 500); //Replace the "0" with the correct sine equation
		ofDrawCircle(t, -1. * sin1_t, 1); //-1 * sin1_t because in of, y gets bigger as you go downwards
	}

	//Draw the second sine in green:
	ofSetColor(0, 255, 0);
	for (int t = 0; t < 500; ++t) {
		// sine code goes here
		float sin2_t = 50 * sin(TWO_PI*t * 1 / 100);
		ofDrawCircle(t, -1. * sin2_t, 1);
	}

	//Draw the third sine in blue:
	ofSetColor(0, 0, 255);
	for (int t = 0; t < 500; ++t) {
		// sine code goes here
		
		float sin3_t = 200 * sin(TWO_PI*t *	3/500+PI);
		ofDrawCircle(t, -1. * sin3_t, 1);
	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
