/*******************************************************************************************
�� �� �� : Satellite.h
��    �� : Satellite Ŭ������ �����
����� : Header Files ���� Objects�� ��ġ
���ѻ��� :	Satellite Ŭ������ Actor Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ���� �ʿ�
********************************************************************************************/

#ifndef SateliteH
#define SateliteH

#include "Actor.h"

/* Actor Ŭ������ ��ӹ޴� Satellite Ŭ���� ���� */
class Satelite : public Actor 
{
	/* Satellite Ŭ������ private ��� */
	private:
		GLdouble scale;                       //ũ�� : �ΰ������� ������ ���� ��Ÿ��

	/* Satellite Ŭ������ public ��� */
	public:
		Satelite();                           //Satellite ��ü ������
		Satelite(GLdouble scale);             //�Ű� ���� scale�� ���� ���ڷ� �ϴ� Satellite ������
		~Satelite();                          //Satellite ��ü �Ҹ���
		void draw();                          //��ü�� ȭ�鿡 �׷��ִ� �Լ�
		void drawTriangle();                  //�ﰢ�� ���� �׷��ִ� �Լ�
		void drawPiramid();                   //�簢�� ���� �׷��ִ� �Լ�
		void drawSquare();                    //�簢�� ���� �׷��ִ� �Լ�
};

#endif
