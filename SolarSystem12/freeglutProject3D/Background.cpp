/***************************************************************************************************
�� �� �� : Background.cpp
��    �� : Background Ŭ���� ����
����� : Source Files ���ο� ��ġ
���ѻ��� : Background Ŭ������ Sphere Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� �� ���� �ʿ�
***************************************************************************************************/

#include "Background.h"
#include "TextureLoader.h"

/* Sphere Ŭ������ ��� �޴� Background Ŭ���� ������ ���� */
Background::Background() : Sphere(4000, 45, 45)	//���� �߽� ��ǥ ����
{
	init();
}

/* Background Ŭ���� �Ҹ��� ���� */
Background::~Background()
{
	Sphere::~Sphere();
}

/*
init �Լ� ����

��� : ���� ��� �̹����� ���� �������ֱ� ���� �ʱ�ȭ �Լ�
���� : void
��ȯ : void
*/
void Background::init()
{

	unsigned int width, height;						                            //�ʺ�� ���� ����
	unsigned char * data = loadBMPRaw("Background.bmp", width, height, false);	//"background.bmp"������ �ҷ��´�

																				//OpenGL �ؽ�ó �̸� ����
	glGenTextures(1, &textureID);

	//������ �ؽ�ó ID ����
	glBindTexture(GL_TEXTURE_2D, textureID);

	//�̹����� �ؽ�ó�� ����
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR_EXT, GL_UNSIGNED_BYTE, data);

	//�ؽ�ó ���� ��� ���� 
	glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);        //texture�� shading ȥ�� ��� ����
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);		//Wrapping Mode ����
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);		//Wrapping Mode ����
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);	//Ȯ�� ���͸� ���� 
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR); 	//��� ���͸� ���� 

	delete[] data; //���� �Ҵ� ����
}

/*
draw �Լ� ����

��� : ���� ��� �̹����� ���ε� ���� �׷��ִ� ��������
���� : void
��ȯ : void
*/
void Background::draw()
{
	//������ �ؽ�ó ID ����
	glBindTexture(GL_TEXTURE_2D, textureID);
	//���� �ؽ�ó�� ������ ��� �ؽ�ó�� ����
	gluQuadricTexture(quadric, GL_TRUE);
	//ȭ�鿡 ���� ��� �̹����� �׸���
	Sphere::draw();
}

