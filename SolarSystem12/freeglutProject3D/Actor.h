/********************************************************************************************
�� �� �� : Actor.h
��    �� : Actor Ŭ������ �����
����� : Header Files ���ο� ��ġ
���ѻ��� : virtual Ű���带 ����� draw �Լ��� ����
*********************************************************************************************/
#ifndef ActorH
#define ActorH

#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <GL/glut.h>

class Actor
{
	/* Actor Ŭ������ private ��� */
	private:
		GLdouble angle;                       //����: ���� ��ü�� ȸ���ϴ� ������ ũ�⸦ ��Ÿ��, 0���� 360������ �� 
		GLdouble angleX, angleY, angleZ;      //������: x, y, z�� �߿� � ���� �������� ��ü�� ȸ���ϴ��� ��Ÿ��, �������� ���� 1.0�̰� �������� 0.0 
		GLdouble x, y, z;                     //�̵��Ÿ�: ���� ��ü�� �������� x�� �������� x ��ŭ, y�� �������� y��ŭ, z�� �������� z��ŭ �̵��� ��Ÿ��

	/* Actor Ŭ������ protected ��� */
	protected:
		GLfloat r, g, b, a;                    //�� : ���� ��ü�� �� ������ ��Ÿ��, r : ������ g : �ʷϻ� b : �Ķ��� a : ���İ�(����), ��� ���� 0.0���� 1.0������ �� 
	
	/* Actor Ŭ������ public ��� */
	public:
		Actor();                                //Actor ��ü ������
		~Actor();                               //Actor ��ü �Ҹ���

		GLdouble getAngle();                    //��� ���� angle�� ���� ��ȯ�ϴ� �Լ� 
		GLdouble getAngleX();                   //��� ���� angleX�� ���� ��ȯ���ִ� �Լ� 
		GLdouble getAngleY();                   //��� ���� angleY�� ���� ��ȯ���ִ� �Լ� 
		GLdouble getAngleZ();                   //��� ���� angleZ�� ���� ��ȯ���ִ� �Լ�
		GLdouble getX();                        //��� ���� x�� ���� ��ȯ���ִ� �Լ�
		GLdouble getY();                        //��� ���� y�� ���� ��ȯ���ִ� �Լ�
		GLdouble getZ();                        //��� ���� z�� ���� ��ȯ���ִ� �Լ�

		//��� ���� angleX, angleY, angleZ�� �Ű� ���� angX,angY, angX�� ���� �� �� �����ϴ� �Լ� 
		void setAngleVector(GLdouble angX, GLdouble angY, GLdouble angZ); 	

		//��� ���� angle�� �Ű� ���� ang���� �����ϴ� �Լ�
		void setAngle(GLdouble ang); 	

		//��� ���� r, g, b, a��  �Ű� ���� r, g, b, a�� ���� �� �� ���� �ϴ� �Լ�
		void setColor(GLfloat r, GLfloat g, GLfloat b, GLfloat a); 	                    

		void setX(GLdouble x);                   //��� ���� x�� �Ű� ���� x�� ���� ���� �ϴ� �Լ� 
		void setY(GLdouble y); 					 //��� ���� y�� �Ű� ���� y�� ���� ���� �ϴ� �Լ� 
		void setZ(GLdouble z); 	                 //��� ���� z�� �Ű� ���� z�� ���� ���� �ϴ� �Լ� 

		void render();                           //ActorŬ������ ��� ��� ������ ���� ����Ͽ� ���� ��ü�� ����� �Լ� 
		virtual void draw();                     //���� ��ü�� ȭ�鿡 �׷��ִ� �Լ� 

};

#endif

