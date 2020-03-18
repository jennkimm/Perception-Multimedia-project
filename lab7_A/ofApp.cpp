#include "ofApp.h"
#include "ofMath.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetColor(128, 0, 128);
	ofFill();

	//Initialize vectors
	position.set(0, 0);
	direction.set(0, -1);

	velocity2.set(0, -1);
	velocity.set(0.3,0.4);

	angle = velocity2.angle(velocity);

	v1.set(0.3, 0.4);
	v2.set(-0.3, -0.4);
	

	dot = v1.dot(v2); //-0.25

	mag1 = v1.length(); //0.5
	mag2 = v2.length(); //0.5
	
	cos = dot / (mag1*mag2);
	theta = acos(cos);

	
	



}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofTranslate(ofGetWidth() * 0.5, ofGetHeight() * 0.5);
	ofTranslate(position.x, position.y);
	
	position = position + velocity;

	//Your code here

	ofRotate(angle);
	ofRotate(theta / PI * 180);

	//Look at the angle() function

	//draw the triangle
	ofDrawTriangle(0, 0, -5, 15, 5, 15);
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

