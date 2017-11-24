/*
* 파일 이름 : default_character.h
* 작성자 : 조재호
* 최초 작성일 : 2017. 11. 25.
* 업데이트 정보
* 2017. 11. 25 최초 작성
*
* Visual Studio 2017에서 작성
*/

#pragma once

#include <iostream>			    // c++  표준 io 헤더
#include <afxtempl.h>			// CString, CList 등 클래스 사용하기 위한 헤더
#include "character_ability.h"  // 캐릭터 능력치 클래스
#include "character_major.h"	// 캐릭터 전공과목 클래스

class Default_character
{
private:
	Character_ability myAbility;	  // 캐릭터의 능력치
	Character_major   myMajor;		  // 캐릭터의 전공
	CStringList		  myTrait;		  // 캐릭터의 특성
	double		      myGrade[4][2]; // 캐릭터의 학점(4학년 2학기까지)
public:
	Default_character();
	Default_character(const Default_character &copy);
	~Default_character();
};