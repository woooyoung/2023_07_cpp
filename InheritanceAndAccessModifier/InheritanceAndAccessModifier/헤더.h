//판타지 게임의 적 캐릭터 설계를 하려고 한다.
//고블린의 최대 체력은 60이며 공격력을 5이고 사정거리는 10이며 이동속도는 10이다.
//오크의 최대 체력은 80이며 공격력은 10이고 사정거리는 12이며 이동속도는 8이다.
//슬라임의 최대 체력은 100이며 공격력은 3이고 사정거리는 5이며 이동속도는 4이다.
//해골궁수의 최대 체력은 60이며 공격력은 20이고 사정거리는 50이며 이동속도는 3이다.
//이를 상속을 이용해 클래스 설계를 하여 코드를 작성해보자.
//모든 캐릭터는 자신의 이름이라는 속성이 존재하고
//printInfo라는 멤버 함수가 존재하며,
//이 printInfo 라는 멤버 함수를 이용해 생성결과를 출력해보자.

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>

class Unit {
public:
	int maxHp;
	int atk_point;
	int range;
	int movementSpeed;

	char name[50];

	void printInfo() {
		printf("%s의 속성\n", name);
		printf("최대체력 : %d\n", maxHp);
		printf("공격력 : %d\n", atk_point);
		printf("사정거리 : %d\n", range);
		printf("이동속도 : %d\n", movementSpeed);
		printf("\n");
	}
};

class Goblin : public Unit {
public:
	Goblin() {
		maxHp = 60;
		atk_point = 5;
		range = 10;
		movementSpeed = 10;

		strcpy(name, "고블린");

	}
	void printInfo() {
		printf("%s의 속성\n", name);
		printf("최대체력 : %d\n", maxHp);
		printf("공격력 : %d\n", atk_point);
		printf("사정거리 : %d\n", range);
		printf("이동속도 : %d\n", movementSpeed);
	}
};

class Orc : public Unit {
public:
	Orc() {
		maxHp = 80;
		atk_point = 10;
		range = 12;
		movementSpeed = 8;

		strcpy(name, "오크");
	}
	void printInfo() {
		printf("%s의 속성\n", name);
		printf("최대체력 : %d\n", maxHp);
		printf("공격력 : %d\n", atk_point);
		printf("사정거리 : %d\n", range);
		printf("이동속도 : %d\n", movementSpeed);
	}
};

class Slime : public Unit {
public:
	Slime() {
		maxHp = 100;
		atk_point = 3;
		range = 5;
		movementSpeed = 4;

		strcpy(name, "슬라임");
	}
	void printInfo() {
		printf("%s의 속성\n", name);
		printf("최대체력 : %d\n", maxHp);
		printf("공격력 : %d\n", atk_point);
		printf("사정거리 : %d\n", range);
		printf("이동속도 : %d\n", movementSpeed);
	}
};

class SkeletonArcher : public Unit {
public:
	SkeletonArcher() {
		maxHp = 60;
		atk_point = 20;
		range = 50;
		movementSpeed = 3;

		strcpy(name, "해골궁수");
	}
	void printInfo() {
		printf("%s의 속성\n", name);
		printf("최대체력 : %d\n", maxHp);
		printf("공격력 : %d\n", atk_point);
		printf("사정거리 : %d\n", range);
		printf("이동속도 : %d\n", movementSpeed);
	}
};