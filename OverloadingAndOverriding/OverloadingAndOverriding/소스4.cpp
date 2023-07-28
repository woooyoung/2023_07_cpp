#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
// �������̵� : �θ�Ŭ������ Ư�� �Լ��� �ڽ� Ŭ�������� ������ �ϴ°�

class Animal {
public:
	int legs;
	char name[20];

	Animal(int legs, const char* name) {
		this->legs = legs;
		strcpy(this->name, name);
	}
	void printInfo() {
		printf("==���� ���� �Լ� ����==\n");
		printf("�ٸ� ���� : %d\n", legs);
		printf("�̸� : %s\n", name);
	}
};

class Person : public Animal {
public:
	/*int legs;
	char name[20];*/
	char regist_no[40];

	Person(const char* regist_no) : Animal(2, "���"){
		strcpy(this->regist_no, regist_no);
	}
	/*void printInfo() {
		printf("==���� ���� �Լ� ����==\n");
		printf("�ٸ� ���� : %d\n", legs);
		printf("�̸� : %s\n", name);
	}*/
	void printInfo() {
		printf("==��� ���� �Լ� ����==\n");
		printf("�ٸ� ���� : %d\n", legs);
		printf("�̸� : %s\n", name);
		printf("�ֹι�ȣ : %s\n", regist_no);
	}
};

int main() {

	Person* p1 = new Person("1234-5678");
	p1->printInfo();

	Animal* a1 = new Animal(2,"��");
	a1->printInfo();

	return 0;
}