#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	mysound.load("jihad (short ver).mp3"); //bin\data�����I�I
	mysound.setLoop(true);
	//mysound.play();


	//�`��
	ofSetVerticalSync(true);
	ofSetCircleResolution(64);
	ofEnableAlphaBlending();
	radius = 0;

	//�F
	ofBackground(83, 83, 90);
	def_speed = mysound.getSpeed();
}

//--------------------------------------------------------------
void ofApp::update(){
	val = ofSoundGetSpectrum(1); //�Ƃ肠����1�ł�����
	radius = val[0] * 100.0;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255, 251, 250);
	ofDrawBitmapString("Pan Value :" + ofToString(Pan_value), 10, 10);
	ofDrawBitmapString("Now Speed Value :" + ofToString(speed_value), 10, 20);
	ofDrawBitmapString("Default Speed Value :" + ofToString(def_speed), 10, 30);
	ofDrawBitmapString("�T�E���h�X�y�N�g���O�����̒l :" + ofToString(val[0]), 10, 40);

	//�~
	ofSetColor(66, 133, 244, 180);
	ofDrawCircle(mouseX, mouseY, radius);
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 's')
	{
		mysound.setSpeed(def_speed);
		speed_value = def_speed;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	//�p������炵��
	Pan_value = x / (float)ofGetWidth() * 2 - 1.0f; //����Ⴛ����x�̓�{�Ȃ��Ɠ�l�����Ȃ����
	mysound.setPan(Pan_value);
	speed_value = ((float)ofGetHeight() - y) / (float)ofGetHeight() * 2;
	mysound.setSpeed(speed_value);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	mysound.play();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	//mysound.stop();
	//�������x�����āA�N���b�N�����Ă��Đ������̑� �����Ńf�B���C��... �`���^�C�����O�N���Ă��[
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
