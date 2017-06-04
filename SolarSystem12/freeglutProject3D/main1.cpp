/*******************************************************************************************
�� �� ��: main1.cpp
��    ��: ��� .cpp .h �����Ͽ� ����, Looping, ���� �ϴ� ���
�����: Source Files ���ο� ��ġ
���ѻ���: ����
********************************************************************************************/

#include "main1.h" 


int main(int argc, char* argv[])
{
	//â�� ����ϱ� ���� �ʱ��۾� �� �غ� ����
	srand((unsigned)time(NULL));
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(Vp.w, Vp.h);
	glutInitWindowPosition(100, 100);
	glutInit(&argc, argv);
	// Window construction
	int win = glutCreateWindow("Solar System Simulator");

	//â�� ���õ� �Լ�  
	glutDisplayFunc(display);
	glutReshapeFunc(resize);
	glutMotionFunc(motionFunc);
	glutMouseFunc(mouseFunc);
	glutKeyboardFunc(keyPres);
	glutKeyboardUpFunc(keyUp);
	glutSpecialUpFunc(keySpUp);
	glutSpecialFunc(keySp);
	glutIdleFunc(idle);
	// OpenGL basic setting
	initGL();

	// X Y Z �� �����ϱ�
	Axis axis;
	
	//SolarSystem Group ����
	Group solarSystem;
	root.addChildren(&solarSystem);
	solarSystem.setAngleVector(0, 1, 0);			//y���� �������� ȸ��

	//�¾系�� �ý��� SolarSystem�� ����
	solarSystem.addChildren(&sunSystem);
	sunSystem.setAngleVector(0, 1, 0);

	//��� ����
	solarSystem.addChildren(&backgroundSystem);
	backgroundSystem.setAngleVector(0, 1, 0);

	//���� �˵� ����
	mercuryOrbit.setColor(0.5f, 0.5f, 0.0f, 0.0f);
	mercuryOrbit.setAngle(90);
	mercuryOrbit.setAngleVector(1, 0, 0);
	solarSystem.addChildren(&mercuryOrbit);

	//���� �˵� SolarSystem �� ����
	solarSystem.addChildren(&mercurySystem);
	mercurySystem.setX(40.25);
	mercurySystem.setAngleVector(0, 1, 0);

	//�ݼ� �˵� ����	
	venusOrbit.setColor(0.6, 0.6, 0.0, 0.0);
	venusOrbit.setAngle(90);
	venusOrbit.setAngleVector(1, 0, 0);
	solarSystem.addChildren(&venusOrbit);

	//�ݼ� �˵� SolarSystem �� ����
	solarSystem.addChildren(&venusSystem);
	venusSystem.setX(70.25);
	venusSystem.setAngleVector(0, 1, 0);

	//���� �˵� ����
	earthOrbit.setColor(0.7, 0.7, 0.0, 0.0);
	earthOrbit.setAngle(90);
	earthOrbit.setAngleVector(1, 0, 0);
	solarSystem.addChildren(&earthOrbit);

	//���� �˵� SolarSystem �� ����
	solarSystem.addChildren(&earthSystem);
	earthSystem.setX(100.25);
	earthSystem.setAngleVector(0, 1, 0);

	//ȭ�� �˵� ����//	
	marsOrbit.setColor(0.8, 0.8, 0.0, 0.0);
	marsOrbit.setAngle(90);
	marsOrbit.setAngleVector(1, 0, 0);
	solarSystem.addChildren(&marsOrbit);

	//ȭ�� �˵� SolarSystem �� ����
	solarSystem.addChildren(&marsSystem);
	marsSystem.setX(150.25);
	marsSystem.setAngleVector(0, 1, 0);


	//�� �˵� ����//	
	jupiterOrbit.setColor(0.8, 0.8, 0.0, 0.0);
	jupiterOrbit.setAngle(90);
	jupiterOrbit.setAngleVector(1, 0, 0);
	solarSystem.addChildren(&jupiterOrbit);

	//�� �˵� SolarSystem �� ����
	solarSystem.addChildren(&jupiterSystem);
	jupiterSystem.setX(522);
	jupiterSystem.setAngleVector(0, 1, 0);
	
	//�伺 �˵� ����//	
	saturnOrbit.setColor(0.8, 0.8, 0.0, 0.0);
	saturnOrbit.setAngle(90);
	saturnOrbit.setAngleVector(1, 0, 0);
	solarSystem.addChildren(&saturnOrbit);

	//�伺 �˵� SolarSystem �� ����
	solarSystem.addChildren(&saturnSystem);
	saturnSystem.setX(952);
	saturnSystem.setAngleVector(0, 1, 0);

	//õ�ռ� �˵� ����//	
	uranusOrbit.setColor(0.8, 0.8, 0.0, 0.0);
	uranusOrbit.setAngle(90);
	uranusOrbit.setAngleVector(1, 0, 0);
	solarSystem.addChildren(&uranusOrbit);

	//õ�ռ� �˵� SolarSystem �� ����
	solarSystem.addChildren(&uranusSystem);
	uranusSystem.setX(1922);
	uranusSystem.setAngleVector(0, 1, 0);

	//�ؿռ� �˵� ����//	
	naptuneOrbit.setColor(0.8, 0.8, 0.0, 0.0);
	naptuneOrbit.setAngle(90);
	naptuneOrbit.setAngleVector(1, 0, 0);
	solarSystem.addChildren(&naptuneOrbit);

	//�ؿռ� �˵� SolarSystem �� ����
	solarSystem.addChildren(&naptuneSystem);
	naptuneSystem.setX(3012);
	naptuneSystem.setAngleVector(0, 1, 0);

	//�¾�//
	Sun sun;
	sunRef = &sun;
	sun.setColor(1, 1, 1, 1);
	sun.setAngleVector(0, 0, 1);

	//��� ����//
	Background background;
	backgroundRef = &background;
	background.setColor(1, 1, 1, 1);
	background.setAngleVector(0, 0, 1);

	//���� ����//
	Mercury mercury;
	mercuryRef = &mercury;
	mercury.setColor(1, 1, 1, 1);
	mercury.setAngleVector(0, 0, 1);

	//�ݼ� ����//
	Venus venus;
	venusRef = &venus;
	venus.setColor(1, 1, 1, 1);
	venus.setAngleVector(0, 0, 1);

	//���� ����//
	Earth earth;
	earthRef = &earth;
	earth.setColor(1, 1, 1, 1);
	earth.setAngleVector(0, 0, 1);


	//ȭ�� ����//
	Mars mars;
	marsRef = &mars;
	mars.setColor(1, 1, 1, 1);
	mars.setAngleVector(0, 0, 1);


	//�� ����//
	Jupiter jupiter;
	jupiterRef = &jupiter;
	jupiter.setColor(1, 1, 1, 1);
	jupiter.setAngleVector(0, 0, 1);

	//�伺 ����//
	Saturn saturn;
	saturnRef = &saturn;
	saturn.setColor(1, 1, 1, 1);
	saturn.setAngleVector(0, 0, 1);

	//õ�ռ� ����//
	Uranus uranus;
	uranusRef = &uranus;
	uranus.setColor(1, 1, 1, 1);
	uranus.setAngleVector(0, 0, 1);

	//�ؿռ� ����//
	Naptune naptune;
	naptuneRef = &naptune;
	naptune.setColor(1, 1, 1, 1);
	naptune.setAngleVector(0, 0, 1);

	//�¾� ������ ���� Group ����
	Group sunContainer;
	sunContainer.addChildren(&sun);
	sunContainer.setAngle(-90);
	sunContainer.setAngleVector(1, 0, 0);
	sunSystem.addChildren(&sunContainer);

	//����� ��� ���� Group ����
	Group backgroundContainer;
	backgroundContainer.addChildren(&background);
	backgroundContainer.setAngle(-90);
	backgroundContainer.setAngleVector(1, 0, 0);
	backgroundSystem.addChildren(&backgroundContainer);

	//���� ������ ���� Group ����
	Group mercuryContainer;
	mercuryContainer.addChildren(&mercury);
	mercuryContainer.setAngle(-90);
	mercuryContainer.setAngleVector(1, 0, 0);
	mercurySystem.addChildren(&mercuryContainer);

	//�ݼ� ������ ���� Group ����
	Group venusContainer;
	venusContainer.addChildren(&venus);
	venusContainer.setAngle(-90);
	venusContainer.setAngleVector(1, 0, 0);
	venusSystem.addChildren(&venusContainer);


	//���� ������ ���� earthContainer Group ����
	Group earthContainer;
	earthContainer.addChildren(&earth);
	earthContainer.setAngle(-90);
	earthContainer.setAngleVector(1, 0, 0);
	earthSystem.addChildren(&earthContainer);

	//ȭ�� ������ ���� Group ����
	Group marsContainer;
	marsContainer.addChildren(&mars);
	marsContainer.setAngle(-90);
	marsContainer.setAngleVector(1, 0, 0);
	marsSystem.addChildren(&marsContainer);

	//�� ������ ���� Group ����
	Group jupiterContainer;
	jupiterContainer.addChildren(&jupiter);
	jupiterContainer.setAngle(-90);
	jupiterContainer.setAngleVector(1, 0, 0);
	jupiterSystem.addChildren(&jupiterContainer);

	//�伺 ������ ���� Group ����
	Group saturnContainer;
	saturnContainer.addChildren(&saturn);
	saturnContainer.setAngle(-90);
	saturnContainer.setAngleVector(1, 0, 0);
	saturnSystem.addChildren(&saturnContainer);

	//�伺 �� ����	
	ringOfSaturn.setColor(0.5, 0.5, 0.5, 1);
	ringOfSaturn.setAngle(80);
	ringOfSaturn.setAngleVector(1, 0, 0);
	saturnSystem.addChildren(&ringOfSaturn);

	//õ�ռ� ������ ���� Group ����
	Group uranusContainer;
	uranusContainer.addChildren(&uranus);
	uranusContainer.setAngle(-90);
	uranusContainer.setAngleVector(1, 0, 0);
	uranusSystem.addChildren(&uranusContainer);

	//�ؿռ� ������ ���� Group ����
	Group naptuneContainer;
	naptuneContainer.addChildren(&naptune);
	naptuneContainer.setAngle(-90);
	naptuneContainer.setAngleVector(1, 0, 0);
	naptuneSystem.addChildren(&naptuneContainer);

	//�� �˵� ����	
	moonOrbit.setColor(1, 1, 1, 1);
	moonOrbit.setAngle(90);
	moonOrbit.setAngleVector(1, 0, 0);
	earthSystem.addChildren(&moonOrbit);

	//�� ����
	moon.setColor(1, 1, 1, 1);
	moon.setAngleVector(0, 1, 0);
	moon.setX(4.1);
	earthSystem.addChildren(&moon);


	initScene();							//ī�޶� ������ ���� �κ� �ʱ�ȭ
	glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_CONTINUE_EXECUTION);

	glutCreateMenu(myMenu);					//�޴� ��� ����
	glutAddMenuEntry("Automatic Mode", 1);
	glutAddMenuEntry("Manual Mode", 2);
	glutAddMenuEntry("Quit", 3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);		//���콺 ������ ��ư���� ���� �̺�Ʈ �߻�

	glutMainLoop();  //glutMainLoopEvent(); �����Լ��� ���� ����
	return 0;
}
/*
myMenu �Լ� ����

��� : ������ ���콺 ��ư�� ������ �� �޴� ����
���� : id
��ȯ : void
*/
void myMenu(int id)
{
	switch (id)
	{
		case 1:
		{
			automatic = true;                  //�ڵ�����
			break;
		}
		case 2:
		{
			automatic = false;                 //���ڵ����� 
			break;
		}
		case 3:
		{
			glutDestroyWindow(1);
			break;
		}
		default: break;
	}
}
/*
initGL �Լ� ����

��� :  ó�� ������ ���� �� ���̵� ����
���� : void
��ȯ : void
*/
void initGL() {
	for (int i = 0; i < 1000; i++)			//�¾�� ��� ���� ��ǥ ����
	{
		star[i].x = random(1);
		star[i].y = random(1);
		star[i].z = random(1);
	}
	//glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);				// z buffer enable
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_TEXTURE_2D);

	GLfloat mat_diffuse[] = { 1.0f, 0.0f, 0.0f, 1.0f };
	GLfloat mat_specular[] = { 0.0f, 0.0f, 1.0f, 1.0f };
	GLfloat mat_ambient[] = { 0.0f, 1.0f, 0.0f, 1.0f };
	GLfloat mat_shininess[] = { 100.0f };

	GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	GLfloat light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	GLfloat light_ambient[] = { 0.0f, 0.0f, 0.0f, 1.0f };
	GLfloat light_position[] = { 0, 0, 0, 1.0f };

	// enable lighting
	glEnable(GL_LIGHTING);
	// set light property
	glEnable(GL_LIGHT0);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);


	// �� �����̵� �ʱ�ȭ
	glEnable(GL_LIGHT1);
	GLfloat light_specular1[] = { 0.4f, 0.4f, 0.4f, 1.0f };
	GLfloat light_diffuse1[] = { 0.4f, 0.4f, 0.4f, 0.4f };
	glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse1);
	glLightfv(GL_LIGHT1, GL_SPECULAR, light_specular1);
	glLightfv(GL_LIGHT1, GL_AMBIENT, light_ambient);


	// ���� �����̵� �ʱ�ȭ
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, mat_shininess);

	glShadeModel(GL_SMOOTH);

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);			//������ ������� �ӽ� �ʱ�ȭ
	
    // �⺻���� ī�޶� ����
	updateCamera();
	updateProjection();
}
/*
initScene �Լ� ����

��� : ó�� ������ �� ȭ���� ����
���� : void
��ȯ : void
*/
void initScene() {

	sunSystem.setAngle(0);
	earthSystem.setAngle(0);
	satellite.setAngle(0);
	moon.setAngle(0);
	currentView = &initial;

	initial.eyeX = 350;
	initial.eyeY = 350;
	initial.eyeZ = 350;
	initial.lookX = 0;
	initial.lookY = 0;
	initial.lookZ = 0;
	initial.upX = 0;
	initial.upY = 1;
	initial.upZ = 0;

	front.eyeX = 0;
	front.eyeY = 0;
	front.eyeZ = 550;
	front.lookX = 0;
	front.lookY = 0;
	front.lookZ = 0;
	front.upX = 0;
	front.upY = 1;
	front.upZ = 0;

	topView.eyeX = 0;
	topView.eyeY = 450;
	topView.eyeZ = 0;
	topView.lookX = 0;
	topView.lookY = 0;
	topView.lookZ = 0;
	topView.upX = 1;
	topView.upY = 0;
	topView.upZ = 1;

	lateral.eyeX = 550;
	lateral.eyeY = 0;
	lateral.eyeZ = 0;
	lateral.lookX = 0;
	lateral.lookY = 0;
	lateral.lookZ = 0;
	lateral.upX = 0;
	lateral.upY = 1;
	lateral.upZ = 0;

	updateCamera();
	ortho = false;
	updateProjection();
}
/*
SetAngle �Լ� ����

��� : �� �༺�� ��ġ �� ���� �����ϰ�, ���� ��¥�� Console�� ���
���� : void
��ȯ : void
*/
void SetAngle()
{
	GLdouble day = 1.0139;
	GLdouble cicle = 90;
	date += day;
	sunSystem.setAngle(sunSystem.getAngle() + 5);

	mercurySystem.setAngle(mercurySystem.getAngle() + day/0.24);
	(*mercuryRef).setAngle((*mercuryRef).getAngle() + cicle/59);

	venusSystem.setAngle(venusSystem.getAngle() + day/0.62);
	(*venusRef).setAngle((*venusRef).getAngle() + cicle/243);

	earthSystem.setAngle(earthSystem.getAngle() + day);
	(*earthRef).setAngle((*earthRef).getAngle() + cicle);

	marsSystem.setAngle(marsSystem.getAngle() + day/1.88);
	(*marsRef).setAngle((*marsRef).getAngle() + cicle/1.03);

	jupiterSystem.setAngle(jupiterSystem.getAngle() + day/11.86);
	(*jupiterRef).setAngle((*jupiterRef).getAngle() + cicle/0.41);

	saturnSystem.setAngle(saturnSystem.getAngle() + day/29.46);
	(*saturnRef).setAngle((*saturnRef).getAngle() + cicle/0.44);

	uranusSystem.setAngle(uranusSystem.getAngle() + day/84.02);
	(*uranusRef).setAngle((*uranusRef).getAngle() + cicle/0.65);

	naptuneSystem.setAngle(naptuneSystem.getAngle() + day/164.77);
	(*naptuneRef).setAngle((*naptuneRef).getAngle() + cicle/0.77);

	satellite.setAngle(satellite.getAngle() + 2);
	plane.setAngle(plane.getAngle() + 1);
	moon.setAngle(moon.getAngle() + 3);

	system("cls");
	if (year % 4 == 0)
	{
		printf("%d�� %d�� %d��", year, month, (int)date - leapyearArr[month]);
	}
	else
	{
		printf("%d�� %d�� %d��", year, month, (int)date - normalyearArr[month]);
	}

	if (year%4 == 0)//�����ΰ��
	{
		if (date >= 0 && date <= 31)
		{
			month = 1;
		}
		else if (date > 31 && date <= 60)
		{
			month = 2;
		}
		else if (date > 60 && date <= 91)
		{
			month = 3;
		}
		else if (date > 91 && date <=121)
		{
			month = 4;
		}
		else if (date > 121 && date <= 152)
		{
			month = 5;
		}
		else if (date > 152 && date <= 182)
		{
			month = 6;
		}
		else if (date > 182 && date <= 213)
		{
			month = 7;
		}
		else if (date > 213 && date <= 244)
		{
			month = 8;
		}
		else if (date > 244 && date <= 274)
		{
			month = 9;
		}
		else if (date > 274 && date <= 305)
		{
			month = 10;
		}
		else if (date > 305 && date <= 335)
		{
			month = 11;
		}
		else if (date > 335 && date <= 366)
		{
			month = 12;
		}


		if (date > 365)
		{
			date = date - 365;
			month = 1;
			year++;
		}
	}
	else//������ �ƴ� ���
	{
		if (date >= 0 && date <= 31)
		{
			month = 1;
		}
		else if (date > 31 && date <= 59)
		{
			month = 2;
		}
		else if (date > 59 && date <= 90)
		{
			month = 3;
		}
		else if (date > 90 && date <= 120)
		{
			month = 4;
		}
		else if (date > 120 && date <= 151)
		{
			month = 5;
		}
		else if (date > 151 && date <= 181)
		{
			month = 6;
		}
		else if (date > 181 && date <= 212)
		{
			month = 7;
		}
		else if (date > 212 && date <= 243)
		{
			month = 8;
		}
		else if (date > 243 && date <= 273)
		{
			month = 9;
		}
		else if (date > 273 && date <= 304)
		{
			month = 10;
		}
		else if (date > 304 && date <= 334)
		{
			month = 11;
		}
		else if (date > 334 && date <= 365)
		{
			month = 12;
		}


		if (date > 364)
		{
			date = date - 364;
			month = 1;
			year++;
		}
	}

}

/*
updateCamera �Լ� ����

��� : ī�޶��� ���ο� ��ġ�� ��������
���� : void
��ȯ : void
*/
void updateCamera() {
	glMatrixMode(GL_MODELVIEW);   // VIEW
	glLoadIdentity();
	gluLookAt((*currentView).eyeX, (*currentView).eyeY, (*currentView).eyeZ,
		(*currentView).lookX, (*currentView).lookY, (*currentView).lookZ,
		(*currentView).upX, (*currentView).upY, (*currentView).upZ);

}

/*
resize �Լ� ����

��� : ȭ���� ũ�⸦ ����ڰ� ���Ƿ� �ø��ų� ���� ���� �ൿ�� ����
���� : wW, wH
��ȯ : void
*/
void resize(int wW, int wH) {
	// Viewport set up     
	Vp.w = wW; Vp.h = wH;

	// Frustum set up
	updateProjection();

	glutPostRedisplay();
}

/*
updateProjection �Լ� ����

��� : ���� ȭ�� ��带 ���翵���� ���� ������������ �� ���� ����
���� : void
��ȯ : void
*/
void updateProjection() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	Pj.xRight = Vp.w / 2.0 / scale; Pj.xLeft = -Pj.xRight;
	Pj.yTop = Vp.h / 2.0 / scale;  Pj.yBot = -Pj.yTop;
	if (ortho) 
	{
		if (Vp.w <= Vp.h)
			glOrtho(Pj.xLeft, Pj.xRight, Pj.yBot * (GLfloat)Vp.h / (GLfloat)Vp.w, Pj.yTop* (GLfloat)Vp.h / (GLfloat)Vp.w, Pj.zNear, Pj.zFar);
		else
			glOrtho(Pj.xLeft* (GLfloat)Vp.w / (GLfloat)Vp.h, Pj.xRight* (GLfloat)Vp.w / (GLfloat)Vp.h, Pj.yBot , Pj.yTop, Pj.zNear, Pj.zFar);
	}
	else
	{
		gluPerspective(70.0, (GLfloat)Vp.w / (GLfloat)Vp.h, Pj.zNear, Pj.zFar);
	}
}

/*
idle �Լ� ����

��� : �ƹ��͵� ���� ���� ���� �ൿ�� ����.
���� : void
��ȯ : void
*/
void idle(void)
{
	if (automatic==true || Presskey[CCLOCKWISE]==true)
	{
		SetAngle();
	}
	//�˵��� ���� ų���ִ� ���.
	if (orbit == false)
	{
		marsOrbit.setAngleVector(0, 0, 0);
		mercuryOrbit.setAngleVector(0, 0, 0);
		venusOrbit.setAngleVector(0, 0, 0);
		earthOrbit.setAngleVector(0, 0, 0);
		jupiterOrbit.setAngleVector(0, 0, 0);
		saturnOrbit.setAngleVector(0, 0, 0);
		naptuneOrbit.setAngleVector(0, 0, 0);
		uranusOrbit.setAngleVector(0, 0, 0);
	}
	else
	{
		marsOrbit.setAngleVector(1, 0, 0);
		mercuryOrbit.setAngleVector(1, 0, 0);
		venusOrbit.setAngleVector(1, 0, 0);
		earthOrbit.setAngleVector(1, 0, 0);
		jupiterOrbit.setAngleVector(1, 0, 0);
		saturnOrbit.setAngleVector(1, 0, 0);
		naptuneOrbit.setAngleVector(1, 0, 0);
		uranusOrbit.setAngleVector(1, 0, 0);

	}
	//Ű�� ������ ������ �� ī�޶� �̵���Ű�� �κ�.
	if (Presskey[_IN] == true)
	{
		moveCamera(_IN);
		updateCamera();
	}
	if (Presskey[_OUT] == true)
	{
		moveCamera(_OUT);
		updateCamera();
	}
	if (Presskey[RIGHT] == true)
	{
		moveCamera(RIGHT);
		updateCamera();
	}
	if (Presskey[LEFT] == true)
	{
		moveCamera(LEFT);
		updateCamera();
	}
	if (Presskey[UP] == true)
	{
		moveCamera(UP);
		updateCamera();
	}
	if (Presskey[DOWN] == true)
	{
		moveCamera(DOWN);
		updateCamera();
	}
	glutPostRedisplay();
}

/*
display �Լ� ����

��� : ��ȭ���� ����� ���� ��带 ����
���� : void
��ȯ : void
*/
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);

	light_position1[0] = static_cast<GLfloat>((*currentView).eyeX);
	light_position1[1] = static_cast<GLfloat>((*currentView).eyeY);
	light_position1[2] = static_cast<GLfloat>((*currentView).eyeZ);
	glLightfv(GL_LIGHT1, GL_POSITION, light_position1);

	for (int i = 0; i<1000; i++)			//���� ��ĺ� ���
	{
		glPushAttrib(GL_ALL_ATTRIB_BITS);
		glDisable(GL_TEXTURE_2D);
		glDisable(GL_LIGHTING);
		glPushMatrix();
		glTranslatef(star[i].x, star[i].y, star[i].z);
		glColor3f(0.7, 0.7, 0.7);
		glutSolidSphere(0.3, 8, 8);
		glPopMatrix();
		glPopAttrib();
	}


	glViewport(0, 0, Vp.w, Vp.h);
	root.render();

	glutSwapBuffers();
}

/*
setCamera �Լ� ����

��� : �־��� ���͸� �޾� ī�޶�� ī�޶� ������ �̵���Ŵ
���� : 3���� ���Ͱ� x,y,z
��ȯ : void
*/
void setCamera(GLdouble x, GLdouble y, GLdouble z)
{
	GLdouble length = sqrt((x * x) + (y * y) + (z * z));
	x /= length;
	y /= length;
	z /= length;

	// ī�޶� ��ġ�� ������
	currentView->eyeX += x;
	currentView->eyeY += y;
	currentView->eyeZ += z;

	// ī�޶�� ī�޶� ���� ������ �����̵�
	currentView->lookX += x;
	currentView->lookY += y;
	currentView->lookZ += z;
}
/*
moveCamera  �Լ� ����

��� : ī�޶�� ī�޶� ������ �ű�� �Լ�
���� : direction - ī�޶� �̵��� ����
��ȯ : void
*/
void moveCamera(unsigned int direction) {
	GLdouble eX, eY, eZ;
	GLdouble lX, lY, lZ;
	GLdouble uX, uY, uZ;
	GLdouble vX, vY, vZ;
	GLdouble wX, wY, wZ;
	GLdouble hX, hY, hZ;

	// e ���� - ī�޶� ��ġ
	eX = currentView->eyeX;
	eY = currentView->eyeY;
	eZ = currentView->eyeZ;

	// l ���� - ī�޶� ���� ����
	lX = currentView->lookX;
	lY = currentView->lookY;
	lZ = currentView->lookZ;

	// u ���� - e�� l �� ���� �մ� ����
	uX = eX - lX;
	uY = eY - lY;
	uZ = eZ - lZ;

	// v ���� - ������
	vX = -currentView->upX;
	vY = -currentView->upY;
	vZ = -currentView->upZ;

	// w = u x v
	wX = uY * vZ - uZ * vY;
	wY = uZ * vX - uX * vZ;
	wZ = uX * vY - uY * vX;

	// w = u x v. w ���ʹ� �������� ����Ŵ
	hX = uY * wZ - uZ * wY;
	hY = uZ * wX - uX * wZ;
	hZ = uX * wY - uY * wX;

	switch (direction)
	{
	case UP:
		setCamera(hX, hY, hZ);
		break;
	case DOWN:
		setCamera(-hX, -hY, -hZ);
		break;
	case LEFT:
		setCamera(-wX, -wY, -wZ);
		break;
	case RIGHT:
		setCamera(wX, wY, wZ);
		break;
	case _IN:
		setCamera(-uX, -uY, -uZ);
		break;
	case _OUT:
		setCamera(uX, uY, uZ);
		break;
	default:
		break;
	}
}
/*
rotateCamera  �Լ� ����

��� : �ð����, �Ǵ� �ð�ݴ������ �޾� �׿� �°� ī�޶� ȸ��
���� : direction - ī�޶� �̵��� ����
��ȯ : void
*/
void rotateCamera(unsigned int direction) {
	GLdouble uX = currentView->upX;
	GLdouble uY = currentView->upY;
	GLdouble uZ = currentView->upZ;

	if (direction == CLOCKWISE)
	{
		uX = -uX;
		uY = -uY;
		uZ = -uZ;
	}

	GLdouble length = sqrt((uX*uX) + (uY*uY) + (uZ*uZ));
	uX /= length;
	uY /= length;
	uZ /= length;
	rotate(currentView->eyeX, currentView->eyeY, currentView->eyeZ, uX, uY, uZ, 0.1);
}

/*
rotateView �Լ� ����

��� : ī�޶� ������ ���⿡ ���� �̵�������
���� : direction - ī�޶� �̵��� ����
��ȯ : void
*/
void rotateView(int x, int y) {
	GLdouble eX, eY, eZ;
	GLdouble lX, lY, lZ;
	GLdouble uX, uY, uZ;
	GLdouble vX, vY, vZ;
	GLdouble wX, wY, wZ;
	GLdouble hX, hY, hZ;

	// e ���� - ī�޶� ��ġ
	eX = currentView->eyeX;
	eY = currentView->eyeY;
	eZ = currentView->eyeZ;

	// l ���� - ī�޶� ���� ����
	lX = currentView->lookX;
	lY = currentView->lookY;
	lZ = currentView->lookZ;

	// u ���� - e�� l �� ���� �մ� ����
	uX = lX - eX;
	uY = lY - eY;
	uZ = lZ - eZ;

	// v ���� - ������
	vX = currentView->upX;
	vY = currentView->upY;
	vZ = currentView->upZ;

	// w = u x v
	wX = uY * vZ - uZ * vY;
	wY = uZ * vX - uX * vZ;
	wZ = uX * vY - uY * vX;

	// h = u x v. w ���ʹ� �������� ����Ŵ
	hX = uY * wZ - uZ * wY;
	hY = uZ * wX - uX * wZ;
	hZ = uX * wY - uY * wX;

	GLdouble length = sqrt((wX*wX) + (wY*wY) + (wZ*wZ));
	wX /= length;
	wY /= length;
	wZ /= length;

	length = sqrt((hX*hX) + (hY*hY) + (hZ*hZ));
	hX /= length;
	hY /= length;
	hZ /= length;

	rotate(uX, uY, uZ, hX, hY, hZ, float(x) / -360 * 3.141592);
	rotate(uX, uY, uZ, wX, wY, wZ, float(y) / 360 * 3.141592);
	currentView->lookX = uX - eX;
	currentView->lookY = uY - eY;
	currentView->lookZ = uZ - eZ;
	updateCamera();
}
/*
rotate �Լ� ����

��� : ī�޶� ������ ���⿡ ���� �̵�������
���� : vector v - ȸ���� ����
���� : point a  - ȸ�� ��
���� : angle    - ȸ����ų ����
��ȯ : void
*/
void rotate(double &vx, double &vy, double &vz, double ax, double ay, double az, double angle) {
	double ca = cos(angle);
	double sa = sin(angle);
	double crossx = -vy*az + vz*ay;
	double crossy = -vz*ax + vx*az;
	double crossz = -vx*ay + vy*ax;
	double dot = ax*vx + ay*vy + az*vz;
	double rx = vx*ca + crossx*sa + dot*ax*(1 - ca);
	double ry = vy*ca + crossy*sa + dot*ay*(1 - ca);
	double rz = vz*ca + crossz*sa + dot*az*(1 - ca);
	vx = rx;
	vy = ry;
	vz = rz;
}

/*
keyUp �Լ� ����

��� : Ű���忡�� ��ư�� ������ �� �ൿ�� ����
���� : key - �Է¹��� Ű��
���� : mX  - ������
���� : mY  - ������
��ȯ : void
*/
void keyUp(unsigned char key, int mX, int mY)
{
	switch(key)
	{
		case 'w' :
			Presskey[_IN] = false;
			break;

		case 's' :
			Presskey[_OUT] = false;
			break;

		case 'd' :
			Presskey[RIGHT] = false;
			break;

		case 'a' :
			Presskey[LEFT] = false;
			break;

		case 'q':
			Presskey[CCLOCKWISE] = false;
			break;

		default:
			break;
	}

}

/*
keySpUp �Լ� ����

��� : Ű���忡�� ȭ��ǥ ��ư�� ������ �� �ൿ�� ������.
���� : key - �Է¹��� Ű��
���� : mX  - ������
���� : mY  - ������
��ȯ : void
*/
void keySpUp(int key, int mX, int mY)
{
	switch (key)
	{
	case GLUT_KEY_RIGHT:
		Presskey[RIGHT] = false;
		break;

	case GLUT_KEY_LEFT:
		Presskey[LEFT] = false;
		break;

	case GLUT_KEY_UP:
		Presskey[UP] = false;
		break;

	case GLUT_KEY_DOWN:
		Presskey[DOWN] = false;
		break;

	default:
		break;
	}

}

/*
keyPres �Լ� ����

��� : Ű�� �̿��Ͽ� �ൿ�� ����.
���� : key - �Է¹��� Ű��
���� : mX  - ������
���� : mY  - ������
��ȯ : void
*/
void keyPres(unsigned char key, int mX, int mY) {
	bool need_redisplay = true;

	switch (key)
	{
	case 27: /* Esc key */  //continue_in_main_loop = false; (**)
		glutLeaveMainLoop(); //glut ������ ���ߴ� Freeglut�Լ�
		break;

	case '+':
		if (scale < 10.) {
			scale += 0.25; resize(Vp.w, Vp.h);
		}
		break;

	case '-':
		if (scale > 0.3) {
			scale -= 0.25; resize(Vp.w, Vp.h);
		}
		break;

	case 'q':
		Presskey[CCLOCKWISE] = true;
		break;

	case 'b':
		orbit = !orbit;
		break;

	case 'i':
		initScene();
		break;

	case 'x':
		currentView = &lateral;
		updateCamera();
		break;

	case 'y':
		currentView = &front;
		updateCamera();
		break;

	case 'z':
		currentView = &topView;
		updateCamera();
		break;

	case 'p':
		ortho = !ortho;
		updateProjection();
		break;

	case 'm':
		scale += 0.05;
		updateProjection();
		break;

	case 'M':
		scale -= 0.05;
		updateProjection();
		break;

	case 'w':
		Presskey[_IN] = true;
		break;

	case 's':
		Presskey[_OUT] = true;
		break;

	case 'd':
		Presskey[RIGHT] = true;
		break;

	case 'a':
		Presskey[LEFT] = true;
		break;

	case 'r':
		rotateCamera(CLOCKWISE);
		updateCamera();
		break;

	case 'R':
		rotateCamera(CCLOCKWISE);
		updateCamera();
		break;

	default:
		need_redisplay = false;
	}
	// ����â�� ������Ʈ�� �ʿ��� ��� �ٽ� ���÷���
	if (need_redisplay) {
		glutPostRedisplay();
	}
}

/*
keySp �Լ� ����

��� : ȭ��ǥ Ű�� �̿��Ͽ� �ൿ�� ����
���� : key - �Է¹��� Ű��
���� : mX  - ������
���� : mY  - ������
��ȯ : void
*/
void keySp(int key, int mX, int mY) {
	switch (key)
	{
	case GLUT_KEY_RIGHT:
		Presskey[RIGHT] = TRUE;
		break;

	case GLUT_KEY_LEFT:
		Presskey[LEFT] = TRUE;
		break;

	case GLUT_KEY_UP:
		Presskey[UP] = TRUE;
		break;

	case GLUT_KEY_DOWN:
		Presskey[DOWN] = TRUE;
		break;

	default :
		break;
	}
}

/*
mouseFunc �Լ� ����

��� : ���콺�� Ŭ�� ���� �� �ൿ�� ������
���� : button1 - ���콺 ���ʹ�ư�� ����
���� : button2 - ���콺 �����ʹ�ư�� ����
���� : x  - Ŭ���� ���� x ��ǥ
���� : y  - Ŭ���� ���� y ��ǥ
��ȯ : void
*/
void mouseFunc(int button1, int button2, int x, int y)
{
	if (button1 == GLUT_LEFT_BUTTON && button2 == GLUT_DOWN)
	{
		leftButton = true;
		bpx = x;
		bpy = y;
	}

	if (button1 == GLUT_LEFT_BUTTON && button2 == GLUT_UP)
	{
		leftButton = false;
	}
}
/*
motionFunc �Լ� ����

��� : ���콺�� �巡���� ���� �ൿ�� ������
���� : x  - ���� ���콺�� x ��ǥ
���� : y  - ���� ���콺�� y ��ǥ
��ȯ : void
*/
void motionFunc(int x, int y)
{
	if (leftButton)
	{
		int bx = bpx - x;
		int by = bpy - y;
		bpx = x;
		bpy = y;
		rotateView(bx, by);
	}
	glutPostRedisplay();
}

