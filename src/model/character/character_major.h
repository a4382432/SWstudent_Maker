/*
* ���� �̸� : character_major.h
* �ۼ��� : ����ȣ
* ���� �ۼ��� : 2017. 11. 25.
* ������Ʈ ����
* 2017. 11. 25 ���� �ۼ�
*
* Visual Studio 2017���� �ۼ�
*/

#pragma once

class Character_major
{
private:
	int algorithm;	 //ĳ������ �˰���   ���� �ɷ�ġ
	int math;		 //ĳ������   ����     ���� �ɷ�ġ
	int programming; //ĳ������ ���α׷��� ���� �ɷ�ġ
	int project;	 //ĳ������ ������Ʈ   ���� �ɷ�ġ
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

