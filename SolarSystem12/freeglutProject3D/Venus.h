#ifndef VenusH
#define VenusH

#include "Sphere.h"	//Sphere ������� ����

class Venus :
	public Sphere			//Sphere Ŭ������ Public ��� ȣ��
{

private: 			// Ŭ������ Private ���
	GLuint textureID;	//�ؽ���ID��  ��Ÿ��
	void init();

public:				
	Venus();		
	~Venus();		
	void draw();		

};


#endif
