/*******************************************************************************************
�� �� �� : Satellite.cpp
��    �� : Satellite Ŭ������ ����
����� : Source Files ������ Objects�� ��ġ
���ѻ��� : Satellite Ŭ������ Actor Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
********************************************************************************************/

#include "Satellite.h"

	/* Satellite ��ü ������ ���� */
	Satellite::Satellite()
	{
		scale = 20;                               //��� ���� scale�� �� 20���� �ʱ�ȭ 
	}
	
	/* �Ű� ���� scale�� ���� ���ڷ� �ϴ� Satellite ������ */
	Satellite::Satellite(GLdouble scale)
	{
		Satellite::scale = scale;                  //�Ű� ���� scale�� ���� ��� ���� scale�� ����
	}

	/* Satellite Ŭ���� �Ҹ��� ���� */
	Satellite::~Satellite()
	{
		//void
	}

	/* 
	draw �Լ� ����

	��� : ������ü �߽� ��ü�� �������� �¾� �� �ݻ����� ��ġ�� ������ �ΰ����� �׸���
	���� : void
	��ȯ : void
	*/
	void Satellite::draw()
	{
		glColor3f(0.0, 0.29, 0.29);
		glRotatef(90.0, 0.0, 1.0, 0.0);
		glScalef(0.5, 0.5, 0.5);
		glutSolidCube(10.0);                               //ť�� ����� ������ü

		glColor3f(0.0, 0.5, 0.5);
		glScalef(3.0, 0.1, 0.1);
		glutSolidCube(10.0);
		glScalef(1 / 3.0, 1 / 0.1, 1 / 0.1);              //�� ���� ������� ����

		glColor3f(0.4, 0.9, 0.9);                         //�¾� �ݻ��� �׸���
		glPushMatrix();
		glTranslatef(23.0, 0.0, 0.0);
		glRotatef(40, 1.0, 0.0, 0.0);
		glScalef(1.8, 1.0, 0.05);
		glutSolidCube(10.0);
		glPopMatrix();                                    //������ ������ü ��ü �������� �̵�

		glTranslatef(-23.0, 0.0, 0.0);                    //�¾� �ݻ��� �׸���
		glRotatef(40, 1.0, 0.0, 0.0);
		glScalef(1.8, 1.0, 0.05);
		glutSolidCube(10.0);                              //������ ������ü ��ü �������� �̵�
	}
	

