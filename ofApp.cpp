#include "ofApp.h"

int red;
int blue;
int green;

float loc_x;
float loc_y;

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(47, 47, 47); //背景色
	ofSetFrameRate(60);
	ofSetCircleResolution(64);
	ofEnableAlphaBlending();
	loc_x = ofGetWidth() / 2;
	loc_y = ofGetHeight() / 2;
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255, 255, 255, 255);
	ofDrawBitmapString(ofToString(ofGetFrameRate()) + "fps", 20, 20);
	ofSetColor(red, green, blue, 127);
	ofDrawCircle(loc_x, loc_y, 40);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	//円の色をグレーに
	loc_x = x;
	loc_y = y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	loc_x = x;
	loc_y = y;	
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	loc_x = x;
	loc_y = y;

	red = 255;
	green = 63;
	blue = 31;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	red = 41;
	green = 63;
	blue = 255;
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
