/*********************************************************************************************
�� �� �� : Mesh.cpp
��    �� : Mesh Ŭ������ ����
����� : Source Files ���ο� ��ġ
���ѻ��� : Mesh Ŭ������ Actor Ŭ������ ��ӹޱ� ������ Ŭ���� ������ draw �Լ� ������ �ʿ�
**********************************************************************************************/

#include "Mesh.h"	

/* Mesh Ŭ���� ������ ���� */
Mesh::Mesh(char* charname)	
{
	//obj ������ �ҷ���
	model = glmReadOBJ(charname);	
}

/* �Ű� ���� charname, scale�� ���ڷ� �ϴ� Mesh Ŭ���� ������ ���� */
Mesh::Mesh(char* charname, GLfloat scale)
{
	//OBJ ���Ͽ��� model�� ������ �ҷ���
	model = glmReadOBJ(charname);	
	//model ������ �°� ũ�� ����
	glmUnitize(model);	
	//model�� facet ������ ����
	glmFacetNormals(model);		
	//scale ��ŭ model ũ�� ����
	glmScale(model, scale);		
}

/* Mesh Ŭ���� �Ҹ��� ���� */
Mesh::~Mesh()		
{
	//model ��ü�� ���� ����
	glmDelete(model);	
}

/*
draw �Լ� ����

��� : model ��ü�� ȭ�鿡 �׷��ִ� ���ν���
���� : void
��ȯ : void
*/
void Mesh::draw()	
{
	//�� ��ü�� GL_SMOOTH �ɼ� �����Ͽ� ������
	glmDraw(model, GL_SMOOTH);	
}

