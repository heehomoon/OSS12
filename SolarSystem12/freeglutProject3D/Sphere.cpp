/*******************************************************************************************
 �� �� ��: Sphere.cpp
 ��    ��: Sphere Ŭ���� ����
 �����: Sphere Files ������ Objects�� ��ġ
 ���ѻ���: Sphere Ŭ������ Actor Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
********************************************************************************************/

#include "Sphere.h"

 	/* Sphere ��ü ������ ����*/
	Sphere::Sphere()
   	{
		radius = 45.0;                 //��� ���� radius�� ��, 45.0���� �ʱ�ȭ
		slices = 60;                   //��� ���� slices�� ��, 60���� �ʱ�ȭ
		stacks = 60;                   //��� ���� stacks�� ��, 60���� �ʱ�ȭ
		init();                        //�ʱ�ȭ �Լ� ȣ��
	}

	/* �Ű� ���� radius, slices, stacks�� ���� ���ڷ� �ϴ� Sphere ��ü ������ ����*/
	Sphere::Sphere(GLdouble radius, GLint slices, GLint stacks)
 	{
		Sphere::radius = radius;       //�Ű� ��� radius ���� ��� ���� radius�� ����
		Sphere::slices = slices;       //�Ű� ���� slices ���� ��� ���� slices�� ����
		Sphere::stacks = stacks;       //�Ű� ���� stacks ���� ��� ���� stacks�� ����
		init();                        //�ʱ�ȭ �Լ� ȣ��
	}
	
	/*
	init �Լ� ����

	��� : ���� ��� ��ü�� �����ϰ� ��ü�� �Ӽ��� �����ϴ� �Լ�
	���� : void
	��ȯ : void 
	*/
	void Sphere::init()
	{		
	    quadric=gluNewQuadric();                          //���ο� ������� ��ü ����
	    gluQuadricDrawStyle(quadric, GLU_FILL);           //GLU_FILL : ��ü�� ���θ� ä��
	    gluQuadricOrientation (quadric, GLU_OUTSIDE);     //GLU_OUTSIDE : ���� ���Ͱ� �ٱ����� ���ϰ� ��
	    gluQuadricNormals(quadric, GLU_SMOOTH);           //GLU_FLAT : ���� ���� �� ó�� ���̰� �ϴ� ���� ���� ����
	}

	/* Sphere Ŭ���� �Ҹ��� ���� */
	Sphere::~Sphere()
	{
		//gluDeleteQuadric(quadric);                    //������� ��ü ����
	}
		
	/*
	draw �Լ� ����
	
	��� : ���� ��� ��ü, ������, �����̽�, ������ ���� ������ ���� ȭ�鿡 �׸��� ���ν���
	���� : void
	��ȯ : void
	*/

	void Sphere::draw()
	{
		gluSphere(quadric, radius, slices, stacks);   //���� �׸��� OpenGL ���̺귯�� �Լ�
	}

