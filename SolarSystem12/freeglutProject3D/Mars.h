#ifndef MarsH
#define MarsH

#include "Sphere.h"	//Sphere ������� ����


class Mars :

	public Sphere				//Sphere Ŭ������ Public ��� ȣ��
{

private: 				// Earth Ŭ������ Private ���
	GLuint textureID;	//�ؽ���ID��  ��Ÿ��
	void init();


public:				//Mars Ŭ������ Public ���
	Mars();			//Mars ��ü ������
	~Mars();		//Mars ��ü �Ҹ���
	void draw();		//ȭ�鿡 �׷��ִ� �Լ�

};


#endif
