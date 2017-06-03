/*******************************************************************************************
�� �� ��: main1.h
��    ��: ��� .cpp �� �ʿ��� ��� �Լ�, ���, ����, ����ü ���� �� .h ���� ����
�����: Header Files ���ο� ��ġ
���ѻ���: ����
********************************************************************************************/

#pragma once

/*���*/
#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <GL/freeglut.h>
#include <time.h>
#include <stdlib.h>
#include <cmath>
#include "Mesh.h"
#include "Sun.h"
#include "Axis.h" 
#include "Background.h"
#include "Mercury.h"
#include "Venus.h"
#include "Uranus.h"
#include "Naptune.h"
#include "Saturn.h"
#include "Sphere.h" 
#include "Earth.h"
#include "Mars.h"
#include "Jupiter.h"
#include "Disk.h" 
#include "Satellite.h" 
#include "Group.h"
#include <stdio.h>
/*
����ü �� �������� ����
����Ʈ, ���� ȭ���� �簢���� ũ�� �տ�
*/
struct viewPort { GLsizei w; GLsizei h; } Vp = { 700, 700 };

/*ī�޶� ����ü, ī�޶��� ��ġ, ���� ����, �������� ����
upX, upY, upZ �� �������̸� ��� ������ �����ΰ��� ����*/
struct viewCamera {
	GLdouble eyeX, eyeY, eyeZ;
	GLdouble lookX, lookY, lookZ;
	GLdouble upX, upY, upZ;
}
initial = { 350, 350, 350, 0, 0, 0, 0, 1, 0 },
front = { 0, 0, 550, 0,0,0, 0,1,0 },
topView = { 0, 450, 0, 0,0,0, 1,0,1 },
lateral = { 550, 0, 0, 0,0,0, 0,1,0 };

/* ������ ������ ����
 zNear - ������ ��������
 zFar  - ������ ������
 others- ������ �����¿� ũ�⸦ ����*/
struct viewVolume {
	GLdouble xRight, xLeft;
	GLdouble yTop, yBot;
	GLdouble zNear, zFar;
} Pj = { 350, -350, 350,-350, 1, 5000 };

/* �ܰ� �༺ ��ǥ ����ü ����*/
typedef struct randomStar
{
	float x;
	float y;
	float z;
}RandomStar;
RandomStar star[1000];

GLdouble scale = 1;

/* ��¥ ��°� ���õ� ������*/
int year = 1982;
int month = 3;
double date = 69;
int leapyearArr[14] = {0, 0,31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};			//�����϶� ���� �ϼ� ����
int normalyearArr[14] = { 0, 0,31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};		//������ �ƴҶ� ���� �ϼ� ����

bool orbit = false;
bool ortho = false;
bool automatic = false;
bool Presskey[9] = { 0, };
int bpx, bpy;

bool leftButton = false;                                                 //���콺 ���� ��ư�� ������ ��쿡 true

/*���� ���� ��ǥ ����ü*/
viewCamera * currentView = &initial;
GLfloat light_position1[] = { 0, 0, 0, 1.0f };

/*
random �Լ� ����

��� : ȭ����� ��ǥ�� �������� ��ȯ�ϴ� �Լ�
���� : n  = �Լ� ȣ�� Ȯ�� ����
��ȯ : -rand()%700
��ȯ : rand()%700

*/
int random(int n)						
{
	int num = rand();
	if (n == 1)
	{
		if (num % 2 == 1)				
			return -rand() % 700;				//num ���ڰ� Ȧ���ϰ�� -�� �ٿ� ��ȯ
		else
			return rand() % 700;				//num ���ڰ� ¦���ϰ�� �״�� ��ȯ
	}
}


Mesh plane("f-16.obj", 20);			// ȭ�鿡 ǥ���� ��ü���� ����ü ���·� ǥ��
Group root;


/*
�༺�� System(Group) ����
*/
Group sunSystem;
Group backgroundSystem;
Group mercurySystem;
Group venusSystem;
Group earthSystem;
Group marsSystem;
Group jupiterSystem;
Group saturnSystem;
Group uranusSystem;
Group naptuneSystem;

/*
�˵� ����
*/
Disk mercuryOrbit(40, 40.5, 100, 10);
Disk venusOrbit(70, 70.5, 100, 10);
Disk earthOrbit(100, 100.5, 200, 10);
Disk marsOrbit(150, 150.5, 200, 10);
Disk jupiterOrbit(520, 522, 200, 10);
Disk saturnOrbit(950, 952, 200, 10);
Disk ringOfSaturn(30, 45, 200, 10);
Disk uranusOrbit(1920, 1922, 200, 10);
Disk naptuneOrbit(3010, 3012, 200, 10);
Disk moonOrbit(3, 3.2, 60, 1);

/*
�༺  ����
*/
Sun* sunRef;
Background* backgroundRef;
Mercury* mercuryRef;
Venus* venusRef;
Earth* earthRef;
Mars* marsRef;
Jupiter* jupiterRef;
Saturn* saturnRef;
Uranus* uranusRef;
Naptune* naptuneRef;

Satellite satellite;
Sphere moon(0.2, 20, 20);

/*
��� ����
*/
static const unsigned int UP = 0;
static const unsigned int DOWN = 1;
static const unsigned int LEFT = 2;
static const unsigned int RIGHT = 3;
static const unsigned int _IN = 4;
static const unsigned int _OUT = 5;
static const unsigned int CLOCKWISE = 6;
static const unsigned int CCLOCKWISE = 7;

/*
 �Լ� ����
 */
void updateProjection();
void updateCamera();
void rotate(double &vx, double &vy, double &vz, double ax, double ay, double az, double angle);
void moveCamera(unsigned int direction);
void initScene();
void initGL();
void resize(int wW, int wH);
void idle();
void display();
void SetAngle();
void setCamera(GLdouble x, GLdouble y, GLdouble z);
void rotateCamera(unsigned int direction);
void myMenu(int id);
void mouseFunc(int b1, int b2, int x, int y);
void motionFunc(int x, int y);
void keySpUp(int key, int mX, int mY);
void keyUp(unsigned char key, int mX, int mY);
void keyPres(unsigned char key, int mX, int mY);
void keySp(int key, int mX, int mY);
