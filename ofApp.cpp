#include "ofApp.h"

vector<float> x(1000);
vector<float> y(1000);
vector<float> rad(1000);
vector<float> start_x(1000);
vector<float> start_y(1000);
vector<float> end_x(1000);
vector<float> end_y(1000);


//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(47, 47, 47); //背景色
	ofEnableAlphaBlending(); //アルファ値オン
	ofSetCircleResolution(64);
	ofSetLineWidth(2);
	ofEnableSmoothing();
	ofSeedRandom();
	for (int i = 0; i < 1000; i++) {
		x.at(i) = ofRandom(0, ofGetWidth()); //x座標
		y.at(i) = ofRandom(0, ofGetHeight()); //y座標
		rad.at(i) = ofRandom(10, 40); //半径a
		start_x.at(i) = ofRandom(0, ofGetWidth());
		start_y.at(i) = ofRandom(0, ofGetHeight());
		end_x.at(i) = ofRandom(0, ofGetWidth());
		end_x.at(i) = ofRandom(0, ofGetHeight());
	}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(31, 63, 255, 63); //描画色
	for (int i = 0; i < 1000; i++) {
		ofDrawCircle(x.at(i), y.at(i), rad.at(i));
		ofDrawLine(start_x.at(i), start_y.at(i), end_x.at(i), end_y.at(i));
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
