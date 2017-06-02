/*********************************************************************************************
�� �� �� : Disk.cpp
��    �� : Disk Ŭ������ ����
����� : Source Files ���ο� ��ġ
���ѻ��� : Disk Ŭ������ Actor Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
**********************************************************************************************/

#include "Disk.h"


/* Disk Ŭ���� ������ ���� */
Disk::Disk()	
{
	innerRadius = 128;			//��� ���� innerRadius�� ��, 128 �� �ʱ�ȭ
	outerRadius = 132;			//��� ���� outerRadius�� ��, 60�� �ʱ�ȭ
	slices = 180;				//��� ���� slices�� ��, 180�� �ʱ�ȭ
	loops = 1;					//��� ���� loops�� ��, 1�� �ʱ�ȭ
	init();						//�ʱ�ȭ �Լ� ȣ��
}

/* �Ű� ���� innerRadius, outerRadius, slices, loops�� ���ڷ��ϴ� Disk Ŭ���� ������ ���� */
Disk::Disk(GLdouble innerRadius, GLdouble outerRadius, GLint slices, GLint loops)	
{
	//���� ������ �� ����
	Disk::innerRadius = innerRadius;	 //�Ű� ��� innerRadius�� ���� ��� ���� innerRadius�� ����
	//�ٱ��� ������ �� ����
	Disk::outerRadius = outerRadius;	 //�Ű� ��� outerRadius�� ���� ��� ���� outerRadius�� ����
	//�����̽� �� ����
	Disk::slices = slices;			     //�Ű� ��� slices�� ���� ��� ���� slices�� ����
	//���� �� ����
	Disk::loops = loops;			     //�Ű� ��� loops�� ���� ��� ���� loops�� ����
	init();                              //�ʱ�ȭ �Լ� ȣ��
}

/*
init �Լ� ����

��� : ���� ��� ��ü�� �����ϰ� ��ü�� �Ӽ��� �����ϴ� �Լ�
���� : void
��ȯ : void
*/
void Disk::init()	
{		
	//���ο� ������� ��ü ����
	quadric = gluNewQuadric();
	//GLU_FILL : ��ü�� ���θ� ä��
	gluQuadricDrawStyle(quadric, GLU_FILL);	
	//GLU_OUTSIDE : ���� ���Ͱ� ������ ���ϰ� ��
	gluQuadricOrientation (quadric, GLU_INSIDE);
	//GLU_FLAT : ���� ���� �� ó�� ���̰� �ϴ� ���� ���� ����
	gluQuadricNormals(quadric, GLU_FLAT);
}

/* Disk Ŭ���� �Ҹ��� ���� */
Disk::~Disk()	
{
	//������� ��ü ����
	gluDeleteQuadric(quadric);
}

/*
draw �Լ� ����

��� : ���� ��� ��ü, ���� ������, �ٱ� ������, �����̽�, ������ ���� ������ ������ ȭ�鿡 �׸��� ���ν���
���� : void
��ȯ : void
*/
void Disk::draw()	
{		 
	//���� �׸��� OpenGL ���̺귯�� �Լ�
	gluDisk(quadric, innerRadius, outerRadius, slices, loops); 
}




