#include "ofApp.h"
#include "ofMath.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//initialize three points of circles
	keyFrame1.x = 200;
	keyFrame1.y = 50;
	keyFrame2.x = 100;
	keyFrame2.y = 200;
	keyFrame3.x = 300;
	keyFrame3.y = 200;

	//start from frame 0
	fn = 0;

}

xyPoint ofApp::tweenFrames(xyPoint keyFrame1, xyPoint keyFrame2) {
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

	ofFill();

	//draw linear interpolation
	tweenFrames(keyFrame1, keyFrame2);
	ofDrawCircle(keyFrame4.x, keyFrame4.y, 20, 20);
	tweenFrames(keyFrame2, keyFrame3);
	ofDrawCircle(keyFrame4.x, keyFrame4.y, 20, 20);
	tweenFrames(keyFrame3, keyFrame1);
	ofDrawCircle(keyFrame4.x, keyFrame4.y, 20, 20);


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
