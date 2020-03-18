#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	loadFrames(26);
	ofSetFrameRate(10);
}

void ofApp::loadFrames(int n) {
	t1.loadImage("title1.gif");
	t2.loadImage("title2.gif");

	for (int i=1; i < n; i++) {
		string s1, s2,s3,result;
		s1 = "K";
		s2 = to_string(i);
		s3 = ".gif";
		result = s1 + s2 + s3;
		frames[i].loadImage(result);
	}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	t1.draw(0, 0, 200, 200);
	t2.draw(0,0, 200, 200);

	frames[k].draw(0, 0, 200, 200);
	k += 1;
	if (k == 26) {
		k = 0;
	}
		
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
