#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(255, 207, 96); //�w�i�F
	ofEnableAlphaBlending(); //�A���t�@�l�I��
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(242,242,242,127); //�`��F
	ofDrawLine(100, 300, 800, 500);
	ofSetColor(52, 50, 51, 127); //�F�̍Đݒ�
	ofDrawRectangle(200, 250, 200, 300);
	ofSetColor(118, 216, 255, 127); //�F�̍Đݒ�
	ofDrawCircle(450, 300, 150);
	ofSetColor(226, 44, 29, 127); //�F�̍Đݒ�
	ofDrawEllipse(550, 500, 400, 300);
	ofSetColor(0, 185, 0, 127); //�F�̍Đݒ�
	ofDrawTriangle(700, 200, 450, 400, 750, 400);
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
