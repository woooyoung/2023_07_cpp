#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>

int number_counter = 1;

class Employee {
public:
	int no;
	char name[100];
	int gender;
	char rank[100];

	Employee(char* name, int gender, char* rank) {
		strcpy(this->name, name);
		this->gender = gender;
		strcpy(this->rank, rank);
		this->no = number_counter;
		number_counter++;
	}

	void printInfo() {
		printf("�����ȣ : %d\n", no);
		printf("����� : %s\n", name);
		printf("���� : %s\n", gender == 0 ? "����" : "����");
		printf("���� : %s\n", rank);
	}
};

int getInt(const char* prompt);

// ������ �޸� ���� ������� #### �ʼ�
char* getString(const char* prompt);