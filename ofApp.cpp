#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0, 0, 0); //�w�i�F
	ofEnableAlphaBlending(); //�A���t�@�l�I��
	ofSetCircleResolution(64);//�~�̉𑜓x�H
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float x; //�~��x���W
	float y; //�~��y���W
	float radius; //rad
	float alpha = 12; //�A���t�@
	ofSetColor(31, 127, 255, alpha); //�`��F
	x = ofGetWidth() / 2;
	y = ofGetHeight() / 2;
	radius = ofGetWidth() / 40;
	for (int i = 0; i <= 50; i++) {
		ofDrawCircle(x, y, radius);
		radius += 4;
		x += 2;
		y += 3;
		// �A���t�@��120 -> 12���Ăǂ��������Ƃ��낤���H
		// alpha -= (120 - 12) / 50;
	}
	
	//�A���t�@�m�F�p
	//ofSetColor(31, 127, 255, 255);
	//ofDrawRectangle(0, 0, 100, 200);

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
