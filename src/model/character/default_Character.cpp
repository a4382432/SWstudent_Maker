/*
* 파일 이름 : default_character.cpp
* 작성자 : 조재호
* 최초 작성일 : 2017. 11. 25.
* 업데이트 정보
* 2017. 11. 25 최초 작성
*
* Visual Studio 2017에서 작성
*/

#include "default_Character.h"


Default_character::Default_character()
	:myAbility(), myGrade(), myMajor()
{
}

// 불러오기시 저장된 캐릭터를 불러오기 위한 생성자.
Default_character::Default_character(const Default_character &copy)
	:myAbility(copy.myAbility), myMajor(copy.myMajor)
{

	// 특성 리스트를 복사
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
