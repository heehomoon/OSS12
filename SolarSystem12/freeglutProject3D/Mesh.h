/*********************************************************************************************
�� �� �� : Mesh.h
��    �� : Mesh Ŭ������ ����
����� : Header Files ���ο� ��ġ
���ѻ��� : Mesh Ŭ������ Actor Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
**********************************************************************************************/

#ifndef MeshH
#define MeshH

#include "Actor.h"	
#include "glm.h"

/* Actor Ŭ������ ��ӹ޴� Mesh Ŭ���� ���� */
class Mesh : public Actor			
{
	/* Mesh Ŭ������ private ��� */
	private:			
		GLMmodel* model;	        //Obj ���Ͽ��� ���� �ҷ��� �����ϴ� ����

	/* Mesh Ŭ������ public ��� */
	public:						
		Mesh(char* filename);					//�Ű� ���� filename�� ���ڷ� �ϴ� Mesh ��ü ������
		Mesh(char* filename, GLfloat scale);	//�Ű� ���� filename, scale �� ���ڷ� �ϴ� Mesh ��ü ������
		~Mesh();		           				//Mesh ��ü �Ҹ��� 
		void draw();							//�� ��ü�� �׷��ִ� �Լ�
};

#endif

