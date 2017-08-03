/***************************************************************************************************
�� �� �� : Container.cpp
��    �� : Container Ŭ���� ����
����� : Source Files ���ο� ��ġ
***************************************************************************************************/

#include "Container.h"
#include<iostream>


/* Container ��ü ������ ���� */
Container::Container()
{
	setAngle(-90);
	setAngleVector(1, 0, 0);
}

/* Container ��ü �Ҹ��� ���� */
Container::~Container()
{
	//void
}

/*
drawChildren �Լ� ����

��� : children vector �ȿ� �ִ� ��� Actor ��ü���� ȭ�鿡 �׷��ִ� ���ν���
���� : void
��ȯ : void
*/
void Container::drawChildren()
{
	unsigned int i;                                            //i : for������ ���Ǵ� ������ ����
	unsigned int size = children.size();                       //size : children vector�� ũ��(��ü�� ����)

	for (i = 0; i < size; ++i)
	{
		try                                                     //vector ���� ����� �Ǹ� ���ܸ� ���� 
		{
			children.at(i);                                     //i��°�� vector ���� ���� ������ �˻� 
		}
		catch (exception &e)
		{
			cout << "drawChildren �Լ��� vector ���� ���" << endl;
		}
		Actor* child = children[i];                            //Actor ������ ���� child ���� �Ŀ� children vector�� i��° ���� ����
		(*child).render();                                     //child�� ����� Actor ��ü�� render �Լ��� ����Ͽ� ��ü ����
	}
}

/*
addChildren �Լ� ����

��� : children vector�� Actor ��ü�� �߰� �ϴ� ��������
���� : Actor* actor
��ȯ : void
*/
void Container::addChildren(Actor* actor)
{
	children.push_back(actor);                                   // Actor ��ü�� children ���Ϳ� �߰�

																 /* push_back �Լ��� ǥ�� ���̺귯������ �����ϴ� std::vector�� ��� �Լ� vector�� ���� ��Ҹ� �߰��� �� ��� */
}


/*
draw �Լ� ����

��� : drawChildren �Լ��� ȣ�� �ϴ� ��������
���� : void
��ȯ : void
*/
void Container::draw()
{
	drawChildren();
}


