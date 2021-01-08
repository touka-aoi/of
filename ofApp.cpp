#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(47, 47, 47); //背景色
	ofEnableAlphaBlending(); //アルファ値オン
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float x; //point x
	float y; //pint y
	float w; //width
	float h; //height

	w = ofGetWidth() / 30.0;
	h = ofGetHeight() / 20.0; 
	x = 0;
	y = ofGetHeight() / 2 - h / 2; 
	for (int i = 0; i < 30; i++) {
		for (int j = 1; j <= 20; j++) {
			ofSetColor(255 / 20 * j, 127, 255 / 30 * i, 127);
			y = ofGetHeight() - ofGetHeight() / 20.0 * j;
			x = ofGetWidth() / 30.0 * i;
			ofDrawRectangle(x, y, w, h);
		}
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
