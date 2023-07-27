//��Ÿ�� ������ �� ĳ���� ���踦 �Ϸ��� �Ѵ�.
//����� �ִ� ü���� 60�̸� ���ݷ��� 5�̰� �����Ÿ��� 10�̸� �̵��ӵ��� 10�̴�.
//��ũ�� �ִ� ü���� 80�̸� ���ݷ��� 10�̰� �����Ÿ��� 12�̸� �̵��ӵ��� 8�̴�.
//�������� �ִ� ü���� 100�̸� ���ݷ��� 3�̰� �����Ÿ��� 5�̸� �̵��ӵ��� 4�̴�.
//�ذ�ü��� �ִ� ü���� 60�̸� ���ݷ��� 20�̰� �����Ÿ��� 50�̸� �̵��ӵ��� 3�̴�.
//�̸� ����� �̿��� Ŭ���� ���踦 �Ͽ� �ڵ带 �ۼ��غ���.
//��� ĳ���ʹ� �ڽ��� �̸��̶�� �Ӽ��� �����ϰ�
//printInfo��� ��� �Լ��� �����ϸ�,
//�� printInfo ��� ��� �Լ��� �̿��� ��������� ����غ���.

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
		printf("%s�� �Ӽ�\n", name);
		printf("�ִ�ü�� : %d\n", maxHp);
		printf("���ݷ� : %d\n", atk_point);
		printf("�����Ÿ� : %d\n", range);
		printf("�̵��ӵ� : %d\n", movementSpeed);
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

		strcpy(name, "���");

	}
	void printInfo() {
		printf("%s�� �Ӽ�\n", name);
		printf("�ִ�ü�� : %d\n", maxHp);
		printf("���ݷ� : %d\n", atk_point);
		printf("�����Ÿ� : %d\n", range);
		printf("�̵��ӵ� : %d\n", movementSpeed);
	}
};

class Orc : public Unit {
public:
	Orc() {
		maxHp = 80;
		atk_point = 10;
		range = 12;
		movementSpeed = 8;

		strcpy(name, "��ũ");
	}
	void printInfo() {
		printf("%s�� �Ӽ�\n", name);
		printf("�ִ�ü�� : %d\n", maxHp);
		printf("���ݷ� : %d\n", atk_point);
		printf("�����Ÿ� : %d\n", range);
		printf("�̵��ӵ� : %d\n", movementSpeed);
	}
};

class Slime : public Unit {
public:
	Slime() {
		maxHp = 100;
		atk_point = 3;
		range = 5;
		movementSpeed = 4;

		strcpy(name, "������");
	}
	void printInfo() {
		printf("%s�� �Ӽ�\n", name);
		printf("�ִ�ü�� : %d\n", maxHp);
		printf("���ݷ� : %d\n", atk_point);
		printf("�����Ÿ� : %d\n", range);
		printf("�̵��ӵ� : %d\n", movementSpeed);
	}
};

class SkeletonArcher : public Unit {
public:
	SkeletonArcher() {
		maxHp = 60;
		atk_point = 20;
		range = 50;
		movementSpeed = 3;

		strcpy(name, "�ذ�ü�");
	}
	void printInfo() {
		printf("%s�� �Ӽ�\n", name);
		printf("�ִ�ü�� : %d\n", maxHp);
		printf("���ݷ� : %d\n", atk_point);
		printf("�����Ÿ� : %d\n", range);
		printf("�̵��ӵ� : %d\n", movementSpeed);
	}
};