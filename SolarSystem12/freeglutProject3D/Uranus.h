#ifndef UranusH
#define UranusH

#include "Sphere.h"		//Sphere ������� ����


class Uranus :

	public Sphere		//Sphere Ŭ������ Public ��� ȣ��
{

private: 				// Uranus Ŭ������ Private ���
	GLuint textureID;	//�ؽ���ID��  ��Ÿ��
	void init();


public:					//Uranus Ŭ������ Public ���
	Uranus();			//Uranus ��ü ������
	~Uranus();			//Uranus ��ü �Ҹ���
	void draw();		//ȭ�鿡 �׷��ִ� �Լ�

};

#endif
