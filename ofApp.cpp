#include "ofApp.h"

static const int NUM = 1000; //実行する円の数

vector<float> loc_x(NUM);
vector<float> loc_y(NUM);
vector<float> speed_x(NUM);
vector<float> speed_y(NUM);
vector<float> radius(NUM);

vector<int> red(NUM);
vector<int> blue(NUM);
vector<int> green(NUM);

bool mouse_pressed;

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(47, 47, 47); //背景色
	ofSetFrameRate(60);
	ofSetCircleResolution(64);
	ofEnableAlphaBlending();
	mouse_pressed = false;

	for (int i = 0; i < NUM; i++) {
		loc_x.at(i) = ofRandom(0, ofGetWidth());
		loc_y.at(i) = ofRandom(0, ofGetHeight());
		speed_x.at(i) = ofRandom(-5, 5);
		speed_y.at(i) = ofRandom(-5, 5);
		radius.at(i) = ofRandom(4, 40);
		red.at(i) = ofRandom(0, 255);
		green.at(i) = ofRandom(0, 255);
		blue.at(i) = ofRandom(0, 255);
	}
}

//--------------------------------------------------------------
void ofApp::update() {
	for (int i = 0; i < NUM; i++) {
		if (mouse_pressed) {
			speed_x.at(i) = (mouseX - loc_x.at(i)) / 8.0;
			speed_y.at(i) = (mouseY - loc_y.at(i)) / 8.0;
		}

	
		//距離が足されて速度になる
		loc_x.at(i) += speed_x.at(i);
		loc_y.at(i) += speed_y.at(i);

		if (loc_x.at(i) > ofGetWidth() - 40) speed_x.at(i) = speed_x.at(i) * -1;
		if (loc_x.at(i) < 0 + 40) speed_x.at(i) = speed_x.at(i) * -1;
		if (loc_y.at(i) > ofGetHeight() - 40) speed_y.at(i) = speed_y.at(i) * -1;
		if (loc_y.at(i) < 0 + 40) speed_y.at(i) = speed_y.at(i) * -1;

	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofDrawBitmapString(ofToString(ofGetFrameRate()) + "fps", 20, 20);
	for (int i = 0; i < NUM; i++) {
		ofSetColor(red.at(i), blue.at(i), green.at(i), 127);
		ofDrawCircle(loc_x.at(i), loc_y.at(i), radius.at(i));
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
	mouse_pressed = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
	mouse_pressed = false;

	for (int i = 0; i < NUM; i++) {
		speed_x.at(i) = ofRandom(-5, 5);
		speed_y.at(i) = ofRandom(-5, 5);
	}
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}