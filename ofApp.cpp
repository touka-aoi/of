#include "ofApp.h"


float deg_ = 0;
vector<float> vol(512);
vector<float> pre(512);


//--------------------------------------------------------------
void ofApp::setup(){
	bufSize = 512;
	ofBackground(54, 54, 54);
	ofSetColor(0, 0, 255);
	//ofSetBackgroundAuto(false);
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

	deg = TWO_PI / bufSize;
	radius = 500;
	

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	/*ofSetColor(0, 0, 0, 23);
	ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());*/
	float audioHeight = ofGetHeight() / 2.0f; //半分
	float phaseDiff = ofGetWidth() / float(bufSize); //描画分割る
	ofSetColor(255, 198, 214, 127);
	ofNoFill();
	ofSetLineWidth(3);

	ofBeginShape();
	for (int i = 0; i < bufSize; i++)
	{
		//cout << right[i] << endl;
		ofVertex(i * phaseDiff, audioHeight + right[i] * audioHeight); //描画分の一点に対して、 sinだから真ん中を基準にかけてやれば真ん中に出る xは復元と考えることができる
	}
	ofEndShape();

	//真ん中に配置
	ofTranslate(ofGetWidth() / 2 , ofGetHeight() /2);
	ofBeginShape();
	for (int i = 0; i < bufSize; i++)
	{	
		vol.at(i) = right[i];
		if (0 > vol[i]) vol[i] = 0;
		ofVertex((radius + vol[i] * 50) * cos(deg_), (radius + vol[i] * 50)*sin(deg_)); //描画分の一点に対して、 sinだから真ん中を基準にかけてやれば真ん中に出る xは復元と考えることができる
		deg_ += deg;
	}
	deg_ = 0;
	ofEndShape();

	//ofBeginShape();
	//for (int i = 0; i < bufSize; i++)
	//{
	//	ofVertex(i * phaseDiff, audioHeight / 2 + left[i] * audioHeight); //描画分の一点に対して、 sinだから真ん中を基準にかけてやれば真ん中に出る
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