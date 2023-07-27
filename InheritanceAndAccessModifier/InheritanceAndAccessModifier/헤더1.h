#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>

class Unit { // 부모 클래스의 생성자를 사용했다
public:
	int maxHp;
	int atk_point;
	int range;
	int movementSpeed;

	Unit(int maxHp, int atk_point, int range, int movementSpeed) {
		this->maxHp = maxHp;
		this->atk_point = atk_point;
		this->range = range;
		this->movementSpeed = movementSpeed;
	}

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
	Goblin() : Unit(60, 5, 10, 10) {

		strcpy(name, "고블린");
	}
};

class Orc : public Unit {
public:
	Orc() : Unit(80, 10, 12, 8) {

		strcpy(name, "오크");
	}
};

class Slime : public Unit {
public:
	Slime() : Unit(100, 3, 5, 4) {

		strcpy(name, "슬라임");
	}
};

class SkeletonArcher : public Unit {
public:
	SkeletonArcher() : Unit(60, 20, 50, 3) {

		strcpy(name, "해골궁수");
	}
};