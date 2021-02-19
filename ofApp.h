#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		ofSoundPlayer mysound; //�C���X�^���X

		//�ϐ�
		float Pan_value; //�p�������l
		float speed_value; //�ύX��̑��x
		float def_speed; //�ŏ��̍Đ����x (1)
		float radius; //�~�̔��a
		float* val; //�Ȃɂ���H
		
};
