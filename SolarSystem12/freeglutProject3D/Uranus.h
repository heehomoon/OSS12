/*********************************************************************************************
�� �� �� : Uranus.h
��    �� : Uranus Ŭ������ ����
����� : Header Files ���ο� ��ġ
���ѻ��� : Uranus Ŭ������ Sphere Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
**********************************************************************************************/

#ifndef UranusH
#define UranusH

#include "Sphere.h"	

/* Sphere Ŭ������ ��ӹ޴� Uranus Ŭ���� ���� */
class Uranus : public Sphere		
{
	/* Uranus Ŭ������ private ��� */
	private: 				
		GLuint textureID;	//�ؽ�ó ��ȣ�� ����Ǵ� �ؽ���ID
		void init();		//õ�ռ��� �׸� �� �ʿ��� �Լ����� ���ǵ� �ʱ�ȭ �Լ�

	/* Uranus Ŭ������ public ��� */
	public:					
		Uranus();			//Uranus ��ü ������
		~Uranus();			//Uranus ��ü �Ҹ���
		void draw();		//õ�ռ��� ȭ�鿡 �׷��ִ� �Լ�
};

#endif



