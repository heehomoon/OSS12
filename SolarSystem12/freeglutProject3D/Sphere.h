/*******************************************************************************************
 �� �� ��: Sphere.h
 ��    ��: Sphere Ŭ���� �����
 �����: Header Files ���ο� ��ġ
 ���ѻ���: Sphere Ŭ������ Actor Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
********************************************************************************************/

#ifndef SphereH
#define SphereH

#include "Actor.h"

/* Actor Ŭ������ ��ӹ޴� Sphere Ŭ���� ���� */
class Sphere : public Actor {
 	
	/* Sphere Ŭ������ private ��� */
	private:
		GLdouble radius;                //������: ���� ������ ���̸� ��Ÿ��
		GLint slices;                   //�����̽�: ���� �׸� �� �浵���� �������� ������ ������ ����
		GLint stacks;                   //����: ���� �׸� �� �������� �������� ������ ������ ���� 
		void init();                    //���� �׸� �� �ʿ��� �Լ����� ���ǵ� �ʱ�ȭ �Լ�
	
	/* Sphere Ŭ������ protected ��� */
	protected:	
		GLUquadric * quadric;           //���� ��� ��ü(��)�� �ּڰ��� �����ϴ� ������ ����
	
	/* Sphere Ŭ������ public ��� */
	public:
		Sphere();                       //Sphere ��ü ������  
		~Sphere();                      //Sphere ��ü �Ҹ���

		//�Ű� ���� radius, slices, stacks�� ���� ���ڷ� �ϴ� Sphere ��ü ������
		Sphere(GLdouble radius, GLint slices, GLint stacks); 

		void draw();                    //���� ��ü�� ȭ�鿡 �׷��ִ� �Լ�
};

#endif


