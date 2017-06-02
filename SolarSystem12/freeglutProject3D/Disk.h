/*********************************************************************************************
�� �� �� : Disk.h
��    �� : Disk Ŭ������ ����
����� : Header Files ���ο� ��ġ
���ѻ��� : Disk Ŭ������ Actor Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
**********************************************************************************************/

#ifndef DiskH
#define DiskH

#include "Actor.h"	

/* Actor Ŭ������ ��ӹ޴� Disk Ŭ���� ���� */
class Disk : public Actor	
{
	/* Disk Ŭ������ private ��� */
	private:				
		GLUquadric * quadric;		    //���� ��� ��ü(����)�� �ּڰ��� �����ϴ� ������ ����
		GLdouble innerRadius;           //���� ������
		GLdouble outerRadius;		    //�ٱ��� ������
		GLint slices;					//�����̽�: z�� �������� ������ ����
		GLint loops;					//����: ���ɿ� �������� ������ ����
		void init();				    //������ �׸� �� �ʿ��� �Լ����� ���ǵ� �ʱ�ȭ �Լ�

	/* Disk Ŭ������ public ��� */
	public:		
		Disk();					        //Disk ��ü ������
		~Disk();				        //Disk ��ü �Ҹ���

		//�Ű� ���� innerRadius, outerRadius, slices, loops�� ���� ���ڷ� �ϴ� Disk ��ü ������
		Disk(GLdouble innerRadius, GLdouble outerRadius, GLint slices, GLint loops);	
		void draw();				    //������ ȭ�鿡 �׷��ִ� �Լ�
};



#endif

