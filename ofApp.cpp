#include "ofApp.h"

float loc_x; //円のx位置
float loc_y; //円のy位置
float speed_x; //xの速度
float speed_y; //yの速度

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(47, 47, 47); //背景色
	ofSetFrameRate(60);
	ofSetCircleResolution(64);
	//初期位置
	loc_x = ofGetHeight() / 2;
	loc_y = ofGetWidth() / 2;
	//初速度
	speed_x = 7; 
	speed_y = 7;
}

//--------------------------------------------------------------
void ofApp::update(){
	loc_x += speed_x;
	loc_y += speed_y; 
	if (loc_x > ofGetWidth() - 40) speed_x = speed_x * -1;
	if (loc_x < 0 + 40) speed_x = speed_x * -1;
	if (loc_y > ofGetHeight() - 40) speed_y = speed_y * -1;
	if (loc_y < 0 + 40) speed_y = speed_y * -1;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(31, 63, 255); //描画色
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
