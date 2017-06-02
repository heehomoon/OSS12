/*********************************************************************************************
�� �� �� : Mercury.h
��    �� : Mercury Ŭ������ ����
����� : Header Files ���ο� ��ġ
���ѻ��� : Mercury Ŭ������ Sphere Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
**********************************************************************************************/

#ifndef MercuryH
#define MercuryH

#include "Sphere.h"	


/* Sphere Ŭ������ ��ӹ޴� Mercury Ŭ���� ���� */
class Mercury : public Sphere				
{
	/* Mercury Ŭ������ private ��� */
	private: 			
		GLuint textureID;	//�ؽ�ó ��ȣ�� ����Ǵ� �ؽ���ID
		void init();		//������ �׸� �� �ʿ��� �Լ����� ���ǵ� �ʱ�ȭ �Լ�

	/* Mercury Ŭ������ public ��� */
	public:
		Mercury();			//Mercury ��ü ������
		~Mercury();			//Mercury ��ü �Ҹ���
		void draw();		//������ ȭ�鿡 �׷��ִ� �Լ�
};


#endif

