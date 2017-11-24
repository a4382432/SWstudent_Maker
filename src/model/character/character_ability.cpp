/*
* ���� �̸� : character_ability.cpp
* �ۼ��� : ����ȣ
* ���� �ۼ��� : 2017. 11. 25.
* ������Ʈ ����
* 2017. 11. 25 ���� �ۼ�
*
* Visual Studio 2017���� �ۼ�
*/

#include "character_ability.h"



Character_ability::Character_ability()
{
	health		= 100;		 // ĳ������ �ʱ� ü�� 100
	money		= 10000;	 // ĳ������ �ʱ� ���� �ݾ� ����
	sociability = 50;		 // ĳ������ �ʱ� �米�� 50
	happiness   = 100;		 // ĳ������ �ʱ� �ູ�� 100
}

Character_ability::Character_ability(const Character_ability &copy)
	:health(copy.health), money(copy.money), sociability(copy.sociability), happiness(copy.happiness)
{
	// �ҷ������ ����� ĳ������ �ɷ�ġ�� �ҷ����� ���� ������.
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

	// ü�� �ִ� 100, �ּ� 0
	if (health > 100)
		health = 100;
	else if (health < 0)
		health = 0;
}

void Character_ability::addMoney(int num)
{
	money += num;

	// �� �ּ� 0
	if (money < 0)
		money = 0;
}


void Character_ability::addSociability(int num)
{
	sociability += num;

	// ��ȸ�� �ִ� 100, �ּ� 0
	if (sociability > 100)
		sociability = 100;
	else if (sociability < 0)
		sociability = 0;
}

void Character_ability::addHappiness(int num)
{
	happiness += num;

	// �ູ �ִ� 100, �ּ� 0
	if (happiness > 100)
		happiness = 100;
	else if (happiness < 0)
		happiness = 0;
}

Character_ability::~Character_ability()
{
}
