#ifndef JupiterH
#define JupiterH

#include "Sphere.h"	//Sphere ������� ����


class Jupiter :

	public Sphere				//Sphere Ŭ������ Public ��� ȣ��
{

private: 				// Earth Ŭ������ Private ���
	GLuint textureID;	//�ؽ���ID��  ��Ÿ��
	void init();


public:				//Mars Ŭ������ Public ���
	Jupiter();			//Mars ��ü ������
	~Jupiter();		//Mars ��ü �Ҹ���
	void draw();		//ȭ�鿡 �׷��ִ� �Լ�

};


#endif
