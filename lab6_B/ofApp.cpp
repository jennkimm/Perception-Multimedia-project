#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	//set the spring location
	s1.left = ofGetWidth() / 2 - 100;
	s1.right = ((ofGetWidth() / 2) + 100);

	s2.left = ofGetWidth() / 2 - 350;
	s2.right = ofGetWidth() / 2 - 150;

}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	//draw first spring
	s1.updateSpring(0.8,0.92,150);
	s1.updateBaseWidth(0);
	s1.drawSpring();

	//draw second spring
	s2.updateSpring(0.4, 0.92, 150);
	s2.updateBaseWidth(-250);
	s2.drawSpring();
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
	if (s1.over) {
		s1.move = true;
	}
	if (s2.over) {
		s2.move = true;
	}
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
	s1.move = false;
	s2.move = false;
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

