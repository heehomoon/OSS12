#ifndef NaptuneH
#define NaptuneH

#include "Sphere.h"	//Sphere ������� ����


class Naptune :

	public Sphere				//Sphere Ŭ������ Public ��� ȣ��
{

private: 				// Naptune Ŭ������ Private ���
	GLuint textureID;	//�ؽ���ID��  ��Ÿ��
	void init();


public:				//Naptune Ŭ������ Public ���
	Naptune();			//Naptune ��ü ������
	~Naptune();		//Naptune ��ü �Ҹ���
	void draw();		//ȭ�鿡 �׷��ִ� �Լ�

};


#endif
