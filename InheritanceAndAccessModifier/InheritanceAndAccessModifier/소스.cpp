#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <cstdlib>

// ���������� : public, protected, private

// ���
// ������ִ� Ŭ������ ����, �Լ��� �ܺο����� Ȱ���� �� �ִ�.
class Animal {
	/*public*/ // ������ ���� ����
//protected: // �ܺο��� ���� �Ұ�, ��� ���ο��� ���� ����, �θ��ڽ� ������ ���� ����
private: // �ش� Ŭ���� ���� �ܿ��� ���� �Ұ�, ��� ���迡���� ���� �Ұ���
	int legs;
	char name[50];
public:
	Animal(int legs, const char* name) {
		printf("���� ������ �����\n");
		this->legs = legs;
		strcpy(this->name, name);
	}

	void printInfo() {
		printf("�ٸ��� ���� : %d\n", legs);
		printf("�̸� : %s\n", name);
	}
};

class Dog : public Animal {
public:
	Dog() : Animal(4, "��") {
		printf("�� ������ �����\n");
	}
};

// �Ӽ��� ����� �ڽ�Ŭ������ �θ�Ŭ�������� �� ���ų� ���� �� �ִ�.
class Person : public Animal {
public:
	char regist_no[30];

	Person(const char* regist_no) : Animal(2, "���") {
		printf("��� ������ �����\n");
		strcpy(this->regist_no, regist_no);
	}

	void printLegs() {
		printf("Person�� �ٸ� : %d\n", this->legs);
	}
};

int main() {

	Animal* a;

	Person* p = new Person("1234-5678");
	//p->printInfo();

	printf("p->legs : %d\n", p->legs);

	Dog* d = new Dog();
	//d->printInfo();

	//a = p; o
	//a = d;

	//p = a; x
	//d = a;

	//p = (Person*)a; // ����ȯ, casting

	//p = (Person*)d;
	//p->printInfo();

	return 0;
}