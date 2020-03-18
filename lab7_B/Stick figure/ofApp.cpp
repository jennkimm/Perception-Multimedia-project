#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	a.set(1, 0, 0);
	b.set(0, 1, 0);

	c = a.getCrossed(b);

	ofEnableDepthTest();
	ofEnableNormalizedTexCoords();

	axisY = 0;

	//set for a sphere-head
	sphere.setPosition(0, 0, 0);
	sphere.setRadius(50);

	//set for a box-body
	box.setPosition(0, 100, 0);
	box.set(90, 170, 50);

	//set for left arm
	arm1.setPosition(-125, 50, 0);
	arm1.set(170, 40, 50);

	//set for right arm
	arm2.setPosition(125, 50, 0);
	arm2.set(170, 40, 50);

	//set for left leg
	leg1.setPosition(-30, 280, 0);
	leg1.set(30, 170, 50);

	//set for right leg
	leg2.setPosition(30, 280, 0);
	leg2.set(30, 170, 50);

	//set light;
	light.setDiffuseColor(ofFloatColor(0, 0.5, 1.0));
	light.setAmbientColor(ofFloatColor(0.3, 0.3, 0.3));
	light.setPosition(ofGetWidth()*.5, ofGetHeight()*.7, 300);

}

//--------------------------------------------------------------
void ofApp::update() {
	axisY += 0.25;
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofBackground(20);
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2, 0);
	ofSetColor(255);

	cam.begin();
	light.enable();

	//draw a stick person
	ofPushMatrix();
	sphere.draw();
	arm1.draw();
	arm2.draw();
	box.draw();
	leg1.draw();
	leg2.draw();
	ofPopMatrix();


	// Red line from origin on X axis
	ofSetColor(ofColor::red);
	ofDrawLine(a.x, a.y, a.z, 200, 0, 0);

	//Green line from origin on Y axis
	ofSetColor(ofColor::green);
	ofDrawLine(b.x, b.y, b.z, 0, 200, 0);

	//Blue line from origin on cross product of the two vectors
	ofSetColor(ofColor::blue);
	ofDrawLine(c.x, c.y, c.z, 0, 0, 200);

	light.disable();



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
