/*
* 파일 이름 : character_ability.h
* 작성자 : 조재호
* 최초 작성일 : 2017. 11. 25.
* 업데이트 정보
* 2017. 11. 25 최초 작성
*
* Visual Studio 2017에서 작성
*/

#pragma once

class Character_ability
{
private:
	int health;		 // 캐릭터의 체력
	int money;		 // 캐릭터의 소지 금액
	int sociability; // 캐릭터의 사교성
	int happiness;	 // 캐릭터의 현재 행복도
public:
	Character_ability();
	Character_ability(const Character_ability &copy);

	int getHealth();
	int getMoney();
	int getSociability();
	int getHappiness();

	void addHealth(int num);
	void addMoney(int num);
	void addSociability(int num);
	void addHappiness(int num);


	~Character_ability();
};

