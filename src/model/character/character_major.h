/*
* 파일 이름 : character_major.h
* 작성자 : 조재호
* 최초 작성일 : 2017. 11. 25.
* 업데이트 정보
* 2017. 11. 25 최초 작성
*
* Visual Studio 2017에서 작성
*/

#pragma once

class Character_major
{
private:
	int algorithm;	 //캐릭터의 알고리즘   전공 능력치
	int math;		 //캐릭터의   수학     전공 능력치
	int programming; //캐릭터의 프로그래밍 전공 능력치
	int project;	 //캐릭터의 프로젝트   전공 능력치
public:
	Character_major();
	Character_major(const Character_major &copy);
	~Character_major();

	int getAlgorithm();
	int getMath();
	int getProgramming();
	int getProject();

	void addAlgorithm(int num);
	void addMath(int num);
	void addProgramming(int num);
	void addProject(int num);
};

