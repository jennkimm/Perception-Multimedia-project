#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//initialize three points of circles
	keyFrame1.x = 200;
	keyFrame1.y = 50;
	keyFrame2.x = 100;
	keyFrame2.y = 200;
	keyFrame3.x = 300;
	keyFrame3.y = 200;

	//initialize two control points
	controlPoint1 = { 1000, 105 };
	controlPoint2 = { 40, 125 };

	//start from frame 0
	fn = 0;

}

xyPoint ofApp::tweenFrames(xyPoint keyFrame1,xyPoint keyFrame2 ) {
	//lerp calculation
	keyFrame4.x = ofLerp(keyFrame1.x, keyFrame2.x, fn);
	keyFrame4.y = ofLerp(keyFrame1.y, keyFrame2.y, fn);

	//return all the frames between the two circles
	return keyFrame4;
}

//--------------------------------------------------------------
void ofApp::update(){
	//update frame number
	if (fn > 1) {
		fn = 0.01;
	}
	else if (fn < 1) {
		fn += 0.01;
	}
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255);
	ofNoFill();
	ofSetColor(0);

	//draw key frames
	ofDrawCircle(keyFrame1.x, keyFrame1.y, 20, 20);
	ofDrawCircle(keyFrame2.x, keyFrame2.y, 20, 20);
	ofDrawCircle(keyFrame3.x, keyFrame3.y, 20, 20);

	//draw control points
	ofDrawCircle(controlPoint1.x, controlPoint1.y, 10, 10);
	ofDrawCircle(controlPoint2.x, controlPoint2.y, 10, 10);


	//define the position of the ball
	ofNoFill();
	float currentPoint = frameCount * 0.001;
	int currentX = ofInterpolateCatmullRom(controlPoint1.x, keyFrame1.x, keyFrame2.x, controlPoint2.x, currentPoint);
	int currentY = ofInterpolateCatmullRom(controlPoint1.y, keyFrame1.y, keyFrame2.y, controlPoint2.y, currentPoint);
	ofDrawCurve(controlPoint1.x, controlPoint1.y, keyFrame1.x, keyFrame1.y, keyFrame2.x, keyFrame2.y, controlPoint2.x, controlPoint2.y);
	keyFrame.x=currentX;
	keyFrame.y = currentY;
	
	int currentX2= ofInterpolateCatmullRom(controlPoint2.x, keyFrame2.x, keyFrame1.x, controlPoint1.x, currentPoint);
	int currentY2 = ofInterpolateCatmullRom(controlPoint2.y, keyFrame2.y, keyFrame1.y, controlPoint1.y, currentPoint);
	keyFrame5.x = currentX2;
	keyFrame5.y = currentY2;

	//draw two frames that move on the spline
	ofFill();
	ofDrawCircle(keyFrame.x, keyFrame.y, 20, 20);
	ofDrawCircle(keyFrame5.x, keyFrame5.y, 20, 20);

	//draw a circle between two frames that move on the spline
	ofSetColor(0,68,150);
	tweenFrames(keyFrame, keyFrame5);
	ofDrawCircle(keyFrame4.x, keyFrame4.y, 10, 10);

	
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
