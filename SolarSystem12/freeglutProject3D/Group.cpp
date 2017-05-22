/***************************************************************************************************
	�� �� �� : Group.cpp
	��    �� : Group Ŭ���� ����
	����� : Source Files ���ο� ��ġ
	���ѻ��� : Group Ŭ������ Actor Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� �� ���� �ʿ�
***************************************************************************************************/

#include "Group.h"
	
	/* Group ��ü ������ ���� */
	Group::Group()
	{              
		//void
	}

	/* Group ��ü �Ҹ��� ���� */
	Group::~Group()
	{
		//void
	}

	/* 
	drawChildren �Լ� ����

	��� : children vector �ȿ� �ִ� ��� Actor ��ü���� ȭ�鿡 �׷��ִ� ���ν���
	���� : void
	��ȯ : void
	*/
	void Group::drawChildren()
	{                                      
		unsigned int i;                                            //i : for������ ���Ǵ� ������ ����
		unsigned int size = children.size();                       //size : children vector�� ũ��(��ü�� ����)

		for(i = 0; i < size; ++i)
		{                     
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
	void Group::addChildren(Actor* actor)
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
	void Group::draw()
	{
		drawChildren();
	}

