#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0, 0, 0); //背景色
	ofEnableAlphaBlending(); //アルファ値オン
	ofSetCircleResolution(64);//円の解像度？
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float x; //円のx座標
	float y; //円のy座標
	float radius; //rad
	float alpha = 12; //アルファ
	ofSetColor(31, 127, 255, alpha); //描画色
	x = ofGetWidth() / 2;
	y = ofGetHeight() / 2;
	radius = ofGetWidth() / 40;
	for (int i = 0; i <= 50; i++) {
		ofDrawCircle(x, y, radius);
		radius += 4;
		x += 2;
		y += 3;
		// アルファが120 -> 12ってどういうことだろうか？
		// alpha -= (120 - 12) / 50;
	}
	
	//アルファ確認用
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
