#ifndef SaturnH
#define SaturnH

#include "Sphere.h"	//Sphere ������� ����


class Saturn :

	public Sphere				//Sphere Ŭ������ Public ��� ȣ��
{

private: 				// Earth Ŭ������ Private ���
	GLuint textureID;	//�ؽ���ID��  ��Ÿ��
	void init();


public:				//Mars Ŭ������ Public ���
	Saturn();			//Mars ��ü ������
	~Saturn();		//Mars ��ü �Ҹ���
	void draw();		//ȭ�鿡 �׷��ִ� �Լ�

};


#endif
