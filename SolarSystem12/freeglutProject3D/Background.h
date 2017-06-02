/***************************************************************************************************
�� �� �� : Background.h
��    �� : Background Ŭ���� ����
����� : Header Files ���ο� ��ġ
���ѻ��� : Background Ŭ������ Sphere Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� �� ���� �ʿ�
***************************************************************************************************/

#ifndef BackgroundH
#define BackgroundH

#include "Sphere.h"	

/* Sphere Ŭ������ ��ӹ޴� Background Ŭ���� ���� */
class Background:public Sphere				
{
	/* Background Ŭ������ public ��� */
	private: 				
		GLuint textureID;		//�ؽ�ó ��ȣ�� ����Ǵ� �ؽ���ID
		void init();            //����� �׸� �� �ʿ��� �Լ����� ���ǵ� �ʱ�ȭ �Լ�

	/* Background Ŭ������ public ��� */
	public:				
		Background();			//Background ��ü ������
		~Background();			//Background ��ü �Ҹ���
		void draw();			//����� ȭ�鿡 �׷��ִ� �Լ�

};


#endif

