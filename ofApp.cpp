#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(47, 47, 47); //�w�i�F
	ofEnableAlphaBlending(); //�A���t�@�l�I��
	ofSetCircleResolution(64);//�~�̉𑜓x�H
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(31, 127, 255, 127);
	ofDrawCircle(1024 / 2, 768 / 2, 100);
	ofDrawCircle(1024 / 2, 768 / 2, 100 + 40);
	ofDrawCircle(1024 / 2, 768 / 2, 100 + 80);
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
