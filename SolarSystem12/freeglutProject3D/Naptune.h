/*********************************************************************************************
�� �� �� : Naptune.h
��    �� : Naptune Ŭ������ ����
����� : Header Files ���ο� ��ġ
���ѻ��� : Naptune Ŭ������ Sphere Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
**********************************************************************************************/

#ifndef NaptuneH
#define NaptuneH

#include "Sphere.h"	

/* Sphere Ŭ������ ��ӹ޴� Naptune Ŭ���� ���� */
class Naptune : public Sphere				
{
	/* Naptune Ŭ������ private ��� */
	private: 				
		GLuint textureID;		//�ؽ�ó ��ȣ�� ����Ǵ� �ؽ���ID
		void init();			//õ�ռ��� �׸� �� �ʿ��� �Լ����� ���ǵ� �ʱ�ȭ �Լ�

	/* Naptune Ŭ������ private ��� */
	public:				
		Naptune();				//Naptune ��ü ������
		~Naptune();				//Naptune ��ü �Ҹ���
		void draw();			//õ�ռ��� ȭ�鿡 �׷��ִ� �Լ�
};


#endif

