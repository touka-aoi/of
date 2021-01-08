#include "ofApp.h"

vector<int> red(768);
vector<int> blue(768);
vector<int> green(768);






//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(47, 47, 47); //背景色
	ofEnableAlphaBlending(); //アルファ値オン
	ofEnableSmoothing();
	ofSeedRandom();
	for (int i = 0; i < 768; i++) {
		red.at(i) = ofRandom(0, 31);
		green.at(i) = ofRandom(31, 63);
		blue.at(i) = ofRandom(31, 63);
	}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(31, 63, 255, 63); //描画色
	for (int i = 0; i < 768; i++) {
		ofSetColor(red.at(i), green.at(i), blue.at(i));
		ofDrawLine(0, i, ofGetWidth(), i);
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
