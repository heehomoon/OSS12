/*********************************************************************************************
�� �� �� : Earth.h
��    �� : Earth Ŭ������ ����
����� : Header Files ���ο� ��ġ
���ѻ��� : Earth Ŭ������ Sphere Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
**********************************************************************************************/

#ifndef EarthH
#define EarthH

#include "Sphere.h"	

/* Sphere Ŭ������ ��ӹ޴� Earth Ŭ���� ���� */
class Earth :public Sphere				
{
	/* Earth Ŭ������ private ��� */
	private: 			
		GLuint textureID;	//�ؽ�ó ��ȣ�� ����Ǵ� �ؽ���ID
		void init();	    //������ �׸� �� �ʿ��� �Լ����� ���ǵ� �ʱ�ȭ �Լ�

	/* Earth Ŭ������ public ��� */
	public:			
		Earth();			//Earth ��ü ������
		~Earth();			//Earth ��ü �Ҹ���
		void draw();		//������ ȭ�鿡 �׷��ִ� �Լ�

};


#endif

