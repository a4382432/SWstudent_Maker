/*
* ���� �̸� : default_character.cpp
* �ۼ��� : ����ȣ
* ���� �ۼ��� : 2017. 11. 25.
* ������Ʈ ����
* 2017. 11. 25 ���� �ۼ�
*
* Visual Studio 2017���� �ۼ�
*/

#include "default_Character.h"


Default_character::Default_character()
	:myAbility(), myGrade(), myMajor()
{
}

// �ҷ������ ����� ĳ���͸� �ҷ����� ���� ������.
Default_character::Default_character(const Default_character &copy)
	:myAbility(copy.myAbility), myMajor(copy.myMajor)
{

	// Ư�� ����Ʈ�� ����
	POSITION pos = copy.myTrait.GetHeadPosition();
	while (pos != NULL)
	{
		myTrait.AddTail(copy.myTrait.GetNext(pos));
	}

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 2; j++)
			myGrade[i][j] = copy.myGrade[i][j];
}

Default_character::~Default_character()
{
}
