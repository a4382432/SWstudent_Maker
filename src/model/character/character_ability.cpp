/*
* 파일 이름 : character_ability.cpp
* 작성자 : 조재호
* 최초 작성일 : 2017. 11. 25.
* 업데이트 정보
* 2017. 11. 25 최초 작성
*
* Visual Studio 2017에서 작성
*/

#include "character_ability.h"



Character_ability::Character_ability()
{
	health		= 100;		 // 캐릭터의 초기 체력 100
	money		= 10000;	 // 캐릭터의 초기 소지 금액 만원
	sociability = 50;		 // 캐릭터의 초기 사교성 50
	happiness   = 100;		 // 캐릭터의 초기 행복도 100
}

Character_ability::Character_ability(const Character_ability &copy)
	:health(copy.health), money(copy.money), sociability(copy.sociability), happiness(copy.happiness)
{
	// 불러오기시 저장된 캐릭터의 능력치를 불러오기 위한 생성자.
}

int Character_ability::getHealth()
{
	return health;
}

int Character_ability::getMoney()
{
	return money;           
}

int Character_ability::getSociability()
{
	return sociability;
}

int Character_ability::getHappiness()
{
	return happiness;
}

void Character_ability::addHealth(int num)
{
	health += num;

	// 체력 최대 100, 최소 0
	if (health > 100)
		health = 100;
	else if (health < 0)
		health = 0;
}

void Character_ability::addMoney(int num)
{
	money += num;

	// 돈 최소 0
	if (money < 0)
		money = 0;
}


void Character_ability::addSociability(int num)
{
	sociability += num;

	// 사회성 최대 100, 최소 0
	if (sociability > 100)
		sociability = 100;
	else if (sociability < 0)
		sociability = 0;
}

void Character_ability::addHappiness(int num)
{
	happiness += num;

	// 행복 최대 100, 최소 0
	if (happiness > 100)
		happiness = 100;
	else if (happiness < 0)
		happiness = 0;
}

Character_ability::~Character_ability()
{
}
