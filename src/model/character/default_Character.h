/*
* ���� �̸� : default_character.h
* �ۼ��� : ����ȣ
* ���� �ۼ��� : 2017. 11. 25.
* ������Ʈ ����
* 2017. 11. 25 ���� �ۼ�
*
* Visual Studio 2017���� �ۼ�
*/

#pragma once

#include <iostream>			    // c++  ǥ�� io ���
#include <afxtempl.h>			// CString, CList �� Ŭ���� ����ϱ� ���� ���
#include "character_ability.h"  // ĳ���� �ɷ�ġ Ŭ����
#include "character_major.h"	// ĳ���� �������� Ŭ����

class Default_character
{
private:
	Character_ability myAbility;	  // ĳ������ �ɷ�ġ
	Character_major   myMajor;		  // ĳ������ ����
	CStringList		  myTrait;		  // ĳ������ Ư��
	double		      myGrade[4][2]; // ĳ������ ����(4�г� 2�б����)
public:
	Default_character();
	Default_character(const Default_character &copy);
	~Default_character();
};