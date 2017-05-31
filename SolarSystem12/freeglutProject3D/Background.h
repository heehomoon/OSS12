#ifndef BackgroundH
#define BackgroundH

#include "Sphere.h"	//Sphere ������� ����


class Background :

	public Sphere				//Sphere Ŭ������ Public ��� ȣ��
{

private: 				// Earth Ŭ������ Private ���
	GLuint textureID;	//�ؽ���ID��  ��Ÿ��
	void init();


public:				//Mars Ŭ������ Public ���
	Background();			//Mars ��ü ������
	~Background();		//Mars ��ü �Ҹ���
	void draw();		//ȭ�鿡 �׷��ִ� �Լ�

};


#endif
