#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	a.set(1, 0, 0);
	b.set(0, 1, 0);

	c = a.getCrossed(b);

	ofEnableDepthTest();
	ofEnableNormalizedTexCoords();

}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofBackground(20);
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2, 0);
	ofSetColor(255);

	cam.begin();

	// Red line from origin on X axis
	ofSetColor(ofColor::red);
	ofDrawLine(a.x, a.y, a.z, 200, 0, 0);

	//Green line from origin on Y axis
	ofSetColor(ofColor::green);
	ofDrawLine(b.x, b.y, b.z, 0, 200, 0);

	//Blue line from origin on cross product of the two vectors
	ofSetColor(ofColor::blue);
	ofDrawLine(c.x, c.y, c.z, 0, 0, 200);




	cam.end();
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
