#include "Naptune.h"
#include "TextureLoader.h"


Naptune::Naptune()		//Naptune�� ������
	: Sphere(9, 45, 45)	//Sphere(��)�� �߽� ��ǥ ����

{

	init();

}

Naptune::~Naptune()			//Naptune�� �Ҹ���
{

	Sphere::~Sphere();

}



void Naptune::init()
{

	unsigned int width, height;						//�ʺ�� ���� ����
	unsigned char * data = loadBMPRaw("neptune.bmp", width, height, false);	//"Naptune.bmp"������ �ҷ��´�

	glGenTextures(1, &textureID);						//OpenGL �ؽ��ĸ� �����
	glBindTexture(GL_TEXTURE_2D, textureID);				//����� �ؽ��� ������Ʈ. ������ �ؽ��Ĵ� �� �ؽ��ķ� �����Ѵ�.


															//OpenGL�� �̹��� ������ �����Ѵ�.	
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR_EXT, GL_UNSIGNED_BYTE, data);
	glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);


	//��ǥ ���͸�
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);		//��巹��
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);		//��巹��
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);	//Ȯ�� ���͸�
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR); 	//��� ���͸�
	delete[] data;

}


void Naptune::draw()	//ȭ�鿡 Naptune�� �׸���
{

	glBindTexture(GL_TEXTURE_2D, textureID);	//����� �ؽ��� ������Ʈ
	gluQuadricTexture(quadric, GL_TRUE);		//������ ��� �ؽ��ĵ��� �� �ؽ��ĸ� ����Ѵ�.
	Sphere::draw();					//ȭ�鿡 Sphere�� �׸���

}

