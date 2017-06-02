/*********************************************************************************************
�� �� �� : Jupiter.h
��    �� : Jupiter Ŭ������ ����
����� : Header Files ���ο� ��ġ
���ѻ��� : Jupiter Ŭ������ Sphere Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
**********************************************************************************************/

#ifndef JupiterH
#define JupiterH

#include "Sphere.h"	

/* Sphere Ŭ������ ��ӹ޴� Jupiter Ŭ���� ���� */
class Jupiter : public Sphere				
{
	/* Jupiter Ŭ������ private ��� */
	private: 				
		GLuint textureID;	    //�ؽ�ó ��ȣ�� ����Ǵ� �ؽ���ID
		void init();            //���� �׸� �� �ʿ��� �Լ����� ���ǵ� �ʱ�ȭ �Լ�

	/* Jupiter Ŭ������ public ��� */
	public:				
		Jupiter();				//Jupiter ��ü ������
		~Jupiter();				//Jupiter ��ü �Ҹ���
		void draw();			//���� ȭ�鿡 �׷��ִ� �Լ�

};

#endif


