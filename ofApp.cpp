#include "ofApp.h"

float loc_x1; //円のx位置
float loc_y1; //円のy位置
float speed_x1; //xの速度
float speed_y1; //yの速度

float loc_x2; //円のx位置
float loc_y2; //円のy位置
float speed_x2; //xの速度
float speed_y2; //yの速度

float loc_x3; //円のx位置
float loc_y3; //円のy位置
float speed_x3; //xの速度
float speed_y3; //yの速度

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(47, 47, 47); //背景色
	ofSetFrameRate(60);
	ofSetCircleResolution(64);
	ofEnableAlphaBlending();
	//初期位置
	loc_x1 = ofRandom(0, ofGetWidth());
	loc_y1 = ofRandom(0, ofGetHeight());
	//初速度
	speed_x1 = ofRandom(-10, 10); 
	speed_y1 = ofRandom(-10, 10);
	//初期位置
	loc_x2 = ofRandom(0, ofGetWidth());
	loc_y2 = ofRandom(0, ofGetHeight());
	//初速度
	speed_x2 = ofRandom(-10, 10);
	speed_y2 = ofRandom(-10, 10);
	//初期位置
	loc_x3 = ofRandom(0, ofGetWidth());
	loc_y3 = ofRandom(0, ofGetHeight());
	//初速度
	speed_x3 = ofRandom(-10, 10);
	speed_y3 = ofRandom(-10, 10);
}

//--------------------------------------------------------------
void ofApp::update(){
	loc_x1 += speed_x1;
	loc_y1 += speed_y1; 
	loc_x2 += speed_x2;
	loc_y2 += speed_y2;
	loc_x3 += speed_x3;
	loc_y3 += speed_y3;
	if (loc_x1 > ofGetWidth() - 40) speed_x1 = speed_x1 * -1;
	if (loc_x1 < 0 + 40) speed_x1 = speed_x1 * -1;
	if (loc_y1 > ofGetHeight() - 40) speed_y1 = speed_y1 * -1;
	if (loc_y1 < 0 + 40) speed_y1 = speed_y1 * -1;

	if (loc_x2 > ofGetWidth() - 40) speed_x2 = speed_x2 * -1;
	if (loc_x2 < 0 + 40) speed_x2 = speed_x2 * -1;
	if (loc_y2 > ofGetHeight() - 40) speed_y2 = speed_y2 * -1;
	if (loc_y2 < 0 + 40) speed_y2 = speed_y2 * -1;

	if (loc_x3 > ofGetWidth() - 40) speed_x3 = speed_x3 * -1;
	if (loc_x3 < 0 + 40) speed_x3 = speed_x3 * -1;
	if (loc_y3 > ofGetHeight() - 40) speed_y3 = speed_y3 * -1;
	if (loc_y3 < 0 + 40) speed_y3 = speed_y3 * -1;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(31, 63, 255); //描画色
	ofDrawCircle(loc_x1, loc_y1, 40);		
	ofDrawCircle(loc_x2, loc_y2, 40);
	ofDrawCircle(loc_x3, loc_y3, 40);
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
