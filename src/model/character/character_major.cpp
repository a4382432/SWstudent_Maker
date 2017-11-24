/*
* 파일 이름 : character_major.cpp
* 작성자 : 조재호
* 최초 작성일 : 2017. 11. 25.
* 업데이트 정보
* 2017. 11. 25 최초 작성
*
* Visual Studio 2017에서 작성
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
	// 불러오기시 저장된 캐릭터의 전공을 불러오기 위한 생성자.
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
