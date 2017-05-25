#ifndef MercuryH
#define MercuryH

#include "Sphere.h"	//Sphere ������� ����

class Mercury :
	public Sphere				//Sphere Ŭ������ Public ��� ȣ��
{

private: 			// Ŭ������ Private ���
	GLuint textureID;	//�ؽ���ID��  ��Ÿ��
	void init();

public:
	Mercury();
	~Mercury();
	void draw();

};


#endif
