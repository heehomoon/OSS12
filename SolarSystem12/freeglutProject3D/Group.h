/********************************************************************************************
	�� �� �� : Group.h
	��    �� : Group Ŭ������ �����
	����� : Header Files ���ο� ��ġ
	���ѻ��� : Group Ŭ������ Actor Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ���� �ʿ�
*********************************************************************************************/

#include "Actor.h"
#include "vector"

#ifndef GroupH
#define GroupH

using namespace std;

/* Actor Ŭ������ ��� �޴� Group Ŭ���� */
class Group : public Actor                                
{                               
	/* Group Ŭ������ private ��� */
	private:
		vector<Actor*> children;                           //children : Actor ��ü���� �����Ӱ� �߰��ϰų� ������ �� �ִ� ����

		/* vector�� ǥ�� ���̺귯������ �����ϴ� std::vector�� ��� ����
		   ũ�� ���� �Ұ����� �迭 ��� ��� */
		void drawChildren();                               //children ���� �ȿ� �ִ� ��� Actor ��ü���� ȭ�鿡 �׸��� �Լ� 

	/* Group Ŭ������ public ��� */
	public:
		Group();                                           //Group ��ü ������
		~Group();                                          //Group ��ü �Ҹ���
	
		void addChildren(Actor* actor);                    //children ���Ϳ� Actor ��ü�� �߰��ϴ� �Լ�
		void draw();	                                   //���� ��ü�� ȭ�鿡 �׷��ִ� �Լ�

};

#endif
