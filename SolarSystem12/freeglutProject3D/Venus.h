/*********************************************************************************************
�� �� �� : Venus.h
��    �� : Venus Ŭ������ ����
����� : Header Files ���ο� ��ġ
���ѻ��� : Venus Ŭ������ Sphere Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
**********************************************************************************************/

#ifndef VenusH
#define VenusH

#include "Sphere.h"	

/* Sphere Ŭ������ ��ӹ޴� Venus Ŭ���� ���� */
class Venus : public Sphere			
{
	/* Venus Ŭ������ private ��� */
	private: 			
		GLuint textureID;	//�ؽ�ó ��ȣ�� ����Ǵ� �ؽ���ID
		void init();		//�ݼ��� �׸� �� �ʿ��� �Լ����� ���ǵ� �ʱ�ȭ �Լ�

	/* Venus Ŭ������ public ��� */
	public:				
		Venus();			//Venus ��ü ������
		~Venus();			//Venus ��ü ������
		void draw();		//�ݼ��� ȭ�鿡 �׷��ִ� �Լ�
};	

#endif

