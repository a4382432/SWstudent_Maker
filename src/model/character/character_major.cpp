/*
* ���� �̸� : character_major.cpp
* �ۼ��� : ����ȣ
* ���� �ۼ��� : 2017. 11. 25.
* ������Ʈ ����
* 2017. 11. 25 ���� �ۼ�
*
* Visual Studio 2017���� �ۼ�
*/

#include "character_major.h"



Character_major::Character_major()
{
	algorithm = 0;
	math = 0;
	programming = 0;
	project = 0;
}

Character_major::Character_major(const Character_major &copy)
	:algorithm(copy.algorithm), math(copy.math), programming(copy.programming), project(copy.project)
{
	// �ҷ������ ����� ĳ������ ������ �ҷ����� ���� ������.
}

int Character_major::getAlgorithm()
{
	return algorithm;
}

int Character_major::getMath()
{
	return math;
}

int Character_major::getProgramming()
{
	return programming;
}

int Character_major::getProject()
{
	return project;
}

void Character_major::addAlgorithm(int num)
{
	algorithm += num;
}

void Character_major::addMath(int num)
{
	math += num;
}

void Character_major::addProgramming(int num)
{
	programming += num;
}

void Character_major::addProject(int num)
{
	project += num;
}

Character_major::~Character_major()
{
}
