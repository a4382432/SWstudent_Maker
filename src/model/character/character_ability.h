/*
* ���� �̸� : character_ability.h
* �ۼ��� : ����ȣ
* ���� �ۼ��� : 2017. 11. 25.
* ������Ʈ ����
* 2017. 11. 25 ���� �ۼ�
*
* Visual Studio 2017���� �ۼ�
*/

#pragma once

class Character_ability
{
private:
	int health;		 // ĳ������ ü��
	int money;		 // ĳ������ ���� �ݾ�
	int sociability; // ĳ������ �米��
	int happiness;	 // ĳ������ ���� �ູ��
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

