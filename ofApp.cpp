#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	sampleRate = 44100;
	bufSize = 512; //�z��p�̃o�b�t�@��
	amp = 0.5;
	pan = 0.5;
	phase = 0;
	frequency = 440;

	ofSetFrameRate(30);
	ofBackground(32, 32, 32);

	ofSoundStreamSettings settings;
	settings.setApi(ofSoundDevice::Api::MS_DS);
	settings.setOutListener(this);
	settings.sampleRate = sampleRate;
	settings.numOutputChannels = 2;
	settings.numInputChannels = 0;
	settings.bufferSize = 512;
	soundStream.setup(settings);
	//�T�E���h�f�o�C�X�m��
	//cout << soundStream.getDeviceList(ofSoundDevice::Api::MS_DS) << endl;



}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float audioHeight = ofGetHeight() / 2.0f; //����
	float phaseDiff = ofGetWidth() / float(bufSize); //�`�敪����
	ofSetColor(0, 0, 255);
	ofNoFill();
	ofSetLineWidth(2);

	ofBeginShape();
	for (int i = 0; i < bufSize; i++)
	{
		ofVertex(i * phaseDiff, audioHeight / 2 * 3 + rAudio[i] * audioHeight); //�`�敪�̈�_�ɑ΂��āA sin������^�񒆂���ɂ����Ă��ΐ^�񒆂ɏo�� x�͕����ƍl���邱�Ƃ��ł���
	}
	ofEndShape();


	ofBeginShape();
	for (int i = 0; i < bufSize; i++)
	{
		ofVertex(i * phaseDiff, audioHeight / 2 + lAudio[i] * audioHeight); //�`�敪�̈�_�ɑ΂��āA sin������^�񒆂���ɂ����Ă��ΐ^�񒆂ɏo��
	}
	ofEndShape();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch (key)
	{
	case '-': //���ʂ�������
			amp -= 0.05;
			amp = MAX(amp, 0); //�ő�l
			break;
	case '+': //���ʂ��グ��
		amp += 0.05;
		amp = MIN(amp, 1);
		break;
	case '1':
		waveShape = 1;
		break;
	case '2':
		waveShape = 2;
		break;
	case '3':
		waveShape = 3;
		break;
	case '4':
		waveShape = 4;
		break;
	case '5':
		waveShape = 5;
		break;
	default:
		break;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	pan = (float)x / (float)ofGetWidth();
	float heightPct = (float(ofGetHeight() - y)) / float(ofGetHeight());
	frequency = 4000.0f * heightPct;
	if (frequency < 20)
	{
		frequency = 20;
	}
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

//--------------------------------------------------------------
void ofApp::audioOut(ofSoundBuffer& output) {
	float sample = 0;
	float phaseDiff;
	int bufferSize = 512;
	int nChannels = 2;

	phaseDiff = TWO_PI * frequency / sampleRate;

	for (int i = 0; i < bufferSize; i++) {
		phase += phaseDiff;
		while (phase > TWO_PI) {
			phase -= TWO_PI;
		}

		switch (waveShape) {
		case 1:
			sample = sin(phase);
			break;
		case 2:
			sample = phase / PI + 1;
			break;
		case 3:
			sample = (phase < PI) ? -1 : 1;
			break;
		case 4:
			sample = (phase < PI) ? -2 / PI * phase + 1 : 2 / PI * phase - 3;
			break;
		case 5:
			sample = ofRandom(-1, 1);
			break;
		default:
			break;
		}

		lAudio[i] = output[i * nChannels] = sample * (1.0 - pan) * amp;
		rAudio[i] = output[i * nChannels + 1] = sample * pan * amp;
	}
}