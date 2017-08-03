/********************************************************************************************
�� �� �� : Container.h
��    �� : Container Ŭ������ �����
����� : Header Files ���ο� ��ġ
*********************************************************************************************/

#include "Actor.h"
#include "vector"

#ifndef ContainerH
#define ContainerH

using namespace std;

/* Actor Ŭ������ ��� �޴� Container Ŭ���� */
class Container : public Actor
{
	/* Container Ŭ������ private ��� */
private:
	vector<Actor*> children;                           //children : Actor ��ü���� �����Ӱ� �߰��ϰų� ������ �� �ִ� ����

													   /* vector�� ǥ�� ���̺귯������ �����ϴ� std::vector�� ��� ����
													   ũ�� ���� �Ұ����� �迭 ��� ��� */
	void drawChildren();                               //children ���� �ȿ� �ִ� ��� Actor ��ü���� ȭ�鿡 �׸��� �Լ� 

													   /* Container Ŭ������ public ��� */
public:
	Container();                                           //Container ��ü ������
	~Container();                                          //Container ��ü �Ҹ���

	void addChildren(Actor* actor);                    //children ���Ϳ� Actor ��ü�� �߰��ϴ� �Լ�
	void draw();	                                   //���� ��ü�� ȭ�鿡 �׷��ִ� �Լ�

};

#endif
