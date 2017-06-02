/*********************************************************************************************
�� �� �� : Saturn.h
��    �� : Saturn Ŭ������ ����
����� : Header Files ���ο� ��ġ
���ѻ��� : Saturn Ŭ������ Sphere Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
**********************************************************************************************/

#ifndef SaturnH
#define SaturnH

#include "Sphere.h"	

/* Sphere Ŭ������ ��ӹ޴� Saturn Ŭ���� ���� */
class Saturn : public Sphere			
{
	/* Saturn Ŭ������ private ��� */
	private: 				
		GLuint textureID;		//�ؽ�ó ��ȣ�� ����Ǵ� �ؽ���ID
		void init();			//�伺�� �׸� �� �ʿ��� �Լ����� ���ǵ� �ʱ�ȭ �Լ�

	/* Saturn Ŭ������ public ��� */
	public:				
		Saturn();				//Saturn ��ü ������
		~Saturn();				//Saturn ��ü �Ҹ���
		void draw();			//�伺�� ȭ�鿡 �׷��ִ� �Լ�

};


#endif

