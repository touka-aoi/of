#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	bufSize = 512;
	ofBackground(54, 54, 54);
	ofSetColor(0, 0, 255);
	ofEnableAlphaBlending();
	ofSoundStreamSettings settings;
	settings.setApi(ofSoundDevice::Api::MS_DS);
	/*debug*/
	auto devices = soundStream.getDeviceList(ofSoundDevice::Api::MS_DS);
	cout << devices << endl;
	settings.setInDevice(devices[11]);
	settings.setInListener(this);
	settings.sampleRate = 44100;
	settings.numOutputChannels = 0;
	settings.numInputChannels = 2;
	settings.bufferSize = bufSize;
	soundStream.setup(settings);

	left = new float[bufSize];
	right = new float[bufSize];


	

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	//ofSetColor(0, 0, 0, 23);
	//ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
	float audioHeight = ofGetHeight() / 2.0f; //����
	float phaseDiff = ofGetWidth() / float(bufSize); //�`�敪����
	ofSetColor(255, 198, 214);
	ofNoFill();
	ofSetLineWidth(3);

	ofBeginShape();
	for (int i = 0; i < bufSize; i++)
	{
		ofVertex(i * phaseDiff, audioHeight + right[i] * audioHeight + 20); //�`�敪�̈�_�ɑ΂��āA sin������^�񒆂���ɂ����Ă��ΐ^�񒆂ɏo�� x�͕����ƍl���邱�Ƃ��ł���
	}
	ofEndShape();


	//ofBeginShape();
	//for (int i = 0; i < bufSize; i++)
	//{
	//	ofVertex(i * phaseDiff, audioHeight / 2 + left[i] * audioHeight); //�`�敪�̈�_�ɑ΂��āA sin������^�񒆂���ɂ����Ă��ΐ^�񒆂ɏo��
	//}
	//ofEndShape();

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

//--------------------------------------------------------------
void ofApp::audioIn(ofSoundBuffer &input) {
	for (int i = 0; i < bufSize; i++) {
		left[i] = input[i * 2];
		right[i] = input[i * 2 + 1];
	}
}