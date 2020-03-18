#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);
	ofEnableDepthTest();
	ofEnableNormalizedTexCoords();
	ofEnableLighting();

	axisY = 0;
	
	//set for tree
	cone1.set(70, 100, 70, 100);
	cone2.set(100, 150, 100, 150);
	cone3.set(130, 200, 130, 200);

	cone1.setPosition(0, 0, 0);
	cone2.setPosition(0, 70, 0);
	cone3.setPosition(0, 140, 0);

	//set for cylinder
	cylinder1.set(50, 50);
	cylinder1.setPosition(0, 200, 0);
	cone1.setHeight(100);
	cone2.setHeight(100);
	cone3.setHeight(100);
	cylinder1.setHeight(100);

	//set for ornaments
	orn1.setRadius(25);
	orn1.setPosition(0,0,30);
	orn2.setRadius(25);
	orn2.setPosition(60, 90, -30);
	orn3.setPosition(60,150,90);
	orn3.setRadius(25);

	//set light;
	light.setDiffuseColor(ofFloatColor(0, 0.5, 1.0));
	light.setAmbientColor(ofFloatColor(0.3, 0.3, 0.3));
	light.setPosition(ofGetWidth()*.5, ofGetHeight()*.7, 300);

}

//--------------------------------------------------------------
void ofApp::update(){
	axisY += 0.25;
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2, 0);
	ofSetColor(255);

	cam.begin();

	light.enable();
	
	ofPushMatrix();
	ofRotateY(axisY);

	ofSetColor(68, 166, 0);
	cone1.draw();
	cone2.draw();
	cone3.draw();

	ofSetColor(98, 21, 0);
	cylinder1.draw();

	ofSetColor(255, 255, 0);
	orn1.draw();
	ofSetColor(255, 0, 0);
	orn2.draw();
	ofSetColor(255, 0, 255);
	orn3.draw();

	ofPopMatrix();
	light.enable();

	cam.end();

	
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
