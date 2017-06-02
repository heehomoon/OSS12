/************************************************************************************
�� �� �� : Actor.cpp
��    �� : Actor Ŭ������ ����
����� : Source Files ���ο� ��ġ
���ѻ��� : virtual Ű���带 ����� draw �Լ��� ����
***********************************************************************************/

#include "Actor.h"

/* Actor ��ü ������ ���� */
Actor::Actor()
{
	r = 0.0;                                   //r : �������� ��Ÿ���� ��, 0.0���� �ʱ�ȭ 
	g = 0.0;                                   //g : �ʷϻ��� ��Ÿ���� ��, 0.0���� �ʱ�ȭ
	b = 0.0;                                   //b : �Ķ����� ��Ÿ���� ��, 0.0���� �ʱ�ȭ 
	a = 1.0;                                   //a : ���İ�(����)�� ��Ÿ���� ��, 1.0���� �ʱ�ȭ 
	x = 0.0;                                   //x : x�� �������� �̵��� ��, 0.0���� �ʱ�ȭ 
	y = 0.0;                                   //y : y�� �������� �̵��� ��, 0.0���� �ʱ�ȭ 
	z = 0.0;                                   //z : z�� �������� �̵��� ��, 0.0���� �ʱ�ȭ                
	angle = 0;                                 //angle : ȸ���� ������ ��Ÿ���� ��, 0���� �ʱ�ȭ 
	angleX = 0.0;                              //angleX : �������� x������ ��Ÿ���� ��, 0.0���� �ʱ�ȭ 
	angleY = 0.0;                              //angleY : �������� y������ ��Ÿ���� ��, 0.0���� �ʱ�ȭ 
	angleZ = 0.0;                              //angleZ : �������� z������ ��Ÿ���� ��, 0.0���� �ʱ�ȭ 
}

/* Actor ��ü �Ҹ��� ���� */
Actor::~Actor()
{
	//void
}

/*
getAngle �Լ� ����

��� : ��ü ��� ���� angle�� ���� ��ȯ�ϴ� �Լ�
���� : void
��ȯ : GLdouble angle
*/
GLdouble Actor::getAngle()
{
	return angle;
}

/*
getAngleX �Լ� ����   //getAngleY, getAngleZ �Լ� ����

��� : ��ü ��� ���� angleX�� ���� ��ȯ�ϴ� �Լ�
���� : void
��ȯ : GLdouble angleX
*/
GLdouble Actor::getAngleX()
{
	return angleX;
}

GLdouble Actor::getAngleY()
{
	return angleY;
}

GLdouble Actor::getAngleZ()
{
	return angleZ;
}

/*
getX �Լ� ���� //getY, getZ �Լ� ����

��� : ��ü ��� ���� x���� ��ȯ�ϴ� �Լ�
���� : void
��ȯ : GLdouble x
*/
GLdouble Actor::getX()
{
	return x;
}

GLdouble Actor::getY()
{
	return y;
}

GLdouble Actor::getZ()
{
	return z;
}


/*
setAngleVector �Լ� ����

��� : ��ü ��� ���� angleX, angleY, angleZ�� �Ű� ���� angX, angY, angZ�� ���� �� �� �����ϴ� ��������
���� : GLdouble angX, GLdouble angY, GLdouble angZ
��ȯ : void
*/
void Actor::setAngleVector(GLdouble angX, GLdouble angY, GLdouble angZ)
{
	angleX = angX;
	angleY = angY;
	angleZ = angZ;
}

/*
setAngle �Լ� ����

��� : ��ü ��� ���� angle�� �Ű� ���� ang�� ���� �����ϴ� ��������
���� : GLint ang
��ȯ : void
*/
void Actor::setAngle(GLdouble ang)
{
	angle = ang;
}

/*
setColor �Լ� ����

��� : ��ü ��� ���� r, g, d, a��  �Ű� ���� r, g, b, a �� ���� �����ϴ� �Լ�
���� : GLfloat r, GLfloat g, GLfloat b, GLfloat a
��ȯ : void
*/
void Actor::setColor(GLfloat r, GLfloat g, GLfloat b, GLfloat a)
{
	Actor::r = r;
	Actor::g = g;
	Actor::b = b;
	Actor::a = a;
}

/*
setX �Լ� ���� (setY, setZ �Լ� ����)

��� : ��ü ��� ���� x��  �Ű� ���� x�� ���� �����ϴ� �Լ�
���� : GLdouble x
��ȯ : void
*/
void Actor::setX(GLdouble x)
{
	Actor::x = x;
}

void Actor::setY(GLdouble y) {
	Actor::y = y;
}

void Actor::setZ(GLdouble z)
{
	Actor::z = z;
}

/*
render �Լ� ����

��� : ��ü�� �׸��µ� �ʿ��� ����(����, ��ġ, ��)�� ������ ��ü�� �����ϴ� ��������
���� : GLdouble z
��ȯ : void
*/
void Actor::render()
{
	glPushMatrix();                                          //���� �𵨺� ����� ��� ���ÿ� ����
	if (a == 0)												//Orbit �� ���õ� �÷��� �ݵ�� a ���� 0���� �ʱ�ȭ ��ų ��!!
	{
		glPushAttrib(GL_ALL_ATTRIB_BITS);
		glDisable(GL_TEXTURE_2D);
		glDisable(GL_LIGHTING);
	}
	glColor4f(r, g, b, a);                                   //r : ������, g : �ʷϻ�, b : �Ķ���, a : ���İ�(����) ���� ����Ͽ� ���� ����
	glRotated(angle, angleX, angleY, angleZ);    //angleX or angleY or angleZ�� ���� 1.0�� ���� �������� angle�� �� ��ŭ ȸ��
	glTranslated(x, y, z);                                  //�������� ���� x���� x��ŭ, y���� y��ŭ, z���� z��ŭ �̵�  
	draw();                                                     //���� ��ü�� ȭ�鿡 �׷��ִ� �Լ� 
	if( a==0)
	{
		glPopAttrib();
	}
	glPopMatrix();                                           //��� ���ÿ� ����� ������ �� �� ��� ��ȯ 
}

/*
draw �Լ� ����

��� : ���� ��ü�� ȭ�鿡 �׷��ִ� ��������
���� : void
��ȯ : void

draw �Լ��� ����� �� virtual Ű���尡 ���ǹǷ� Actor Ŭ������ ��� �޴� Ŭ������ draw �� ���� �ʿ�
*/
void Actor::draw()
{
	//void 
}

