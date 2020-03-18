#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//initialize our points
	keyFrame1.x = 50;
	keyFrame1.y = 50;

	//This syntax works, too:
	keyFrame2 = { 400, 400 };
	controlPoint1 = { 300, 50 };
	controlPoint2 = { 400, 100 };

	//start from frame 0
	frameCount = 0;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(0, 128, 255);
	ofFill();
	//draw key frames
	ofDrawEllipse(keyFrame1.x, keyFrame1.y, 20, 20);
	ofDrawEllipse(keyFrame2.x, keyFrame2.y, 20, 20);

	//draw control points
	ofDrawEllipse(controlPoint1.x, controlPoint1.y, 10, 10);
	ofDrawEllipse(controlPoint2.x, controlPoint2.y, 10, 10);

	ofSetColor(0, 64, 128);
	ofNoFill();
	ofDrawCurve(controlPoint1.x, controlPoint1.y, keyFrame1.x, keyFrame1.y, keyFrame2.x, keyFrame2.y, controlPoint2.x, controlPoint2.y);

	//draw a ball moving between them
	ofFill();
	float currentPoint = frameCount * 0.001; //scale to 0. - 1.
	int currentX = ofInterpolateCatmullRom(controlPoint1.x, keyFrame1.x, keyFrame2.x, controlPoint2.x, currentPoint);
	int currentY = ofInterpolateCatmullRom(controlPoint1.y, keyFrame1.y, keyFrame2.y, controlPoint2.y, currentPoint);;
	ofDrawEllipse(currentX, currentY, 20, 20);

	//increment frameCount, and wrap around 1000
	frameCount = (frameCount + 1) % 1000;


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
