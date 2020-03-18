#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0, 0, 0);

	//Maximilian 
	sampleRate = 44100;
	bufferSize = 512;
	ofxMaxiSettings::setup(sampleRate, 2, bufferSize);

	//set for wave1
	for (int i = 0; i < ofGetWidth(); ++i) {
		waveform1[i] = 0;
	}
	waveIndex1 = 0;

	//set for wave2
	for (int i = 0; i < ofGetWidth(); ++i) {
		waveform2[i] = 0;
	}
	waveIndex2 = 0;

	//set for wave3
	for (int i = 0; i < ofGetWidth(); ++i) {
		waveform3[i] = 0;
	}
	waveIndex3 = 0;


	//gui1
	gui1.setup("first wave parameters");
	gui1.add(frequency1.set("frequency", 250, 20., 10000.));
	gui1.add(amplitude1.set("amplitude", 0., 0., 0.5));

	//gui2
	gui2.setup("second wave parameters");
	gui2.add(frequency2.set("frequency", 250, 20., 10000.));
	gui2.add(amplitude2.set("amplitude", 0., 0., 0.5));


	ofSoundStreamSetup(2, 2, this, sampleRate, bufferSize, 4); /* this has to happen at the end of setup - it switches on the DAC */


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	gui1.draw();
	gui2.draw();


	//waveform1
	ofTranslate(0, ofGetHeight() / 2);
	ofSetColor(0, 255, 0);
	ofFill();
	for (int i = 0; i < ofGetWidth(); ++i) {
		ofDrawCircle(i, waveform1[i] * ofGetHeight() / 2., 1);
	}


	//waveform2
	ofTranslate(0, 100);
	ofSetColor(0, 255, 0);
	ofFill();
	for (int i = 0; i < ofGetWidth(); ++i) {
		ofDrawCircle(i, waveform2[i] * ofGetHeight() / 2., 1);
	}



	//waveform3
	ofTranslate(0, 100);
	ofSetColor(0, 255, 0);
	ofFill();
	for (int i = 0; i < ofGetWidth(); ++i) {
		ofDrawCircle(i, waveform3[i] * ofGetHeight() / 2., 1);
	}


}

void ofApp::audioOut(float * output, int bufferSize, int nChannels) {
	//press 'q' to hear sine wave1 sound
	if (k == 1) {
		for (int i = 0; i < bufferSize; ++i) {

			output[i * nChannels] = amplitude1 * oscillator1.sinewave(frequency1);
			output[i * nChannels + 1] = output[i * nChannels];

			waveform1[waveIndex1] = output[i * nChannels];
			++waveIndex1;
			if (waveIndex1 > (ofGetWidth() - 1))
				waveIndex1 = 0;
		}
	}

	//press 'w' to hear sine wave2 sound
	if (k == 2) {
		for (int i = 0; i < bufferSize; ++i) {

			output[i * nChannels] = amplitude2 * oscillator2.sinewave(frequency2);
			output[i * nChannels + 1] = output[i * nChannels];

			waveform2[waveIndex2] = output[i * nChannels];
			++waveIndex2;
			if (waveIndex2 > (ofGetWidth() - 1))
				waveIndex2 = 0;
		}
	}

	//press 'e' to hear mixed sound of sine wave 1 and 2
	if (k == 3) {
		for (int i = 0; i < bufferSize; ++i) {

			output[i * nChannels] = amplitude1 * oscillator1.sinewave(frequency1)+ amplitude2 * oscillator2.sinewave(frequency2);
			output[i * nChannels + 1] = output[i * nChannels];

			waveform3[waveIndex3] = output[i * nChannels];
			++waveIndex3;
			if (waveIndex3 > (ofGetWidth() - 1))
				waveIndex3 = 0;
		}
	}
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'q') {
		k = 1;
	}
	if (key == 'w') {
		k = 2;
	}
	if (key == 'e') {
		k = 3;
	}

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
