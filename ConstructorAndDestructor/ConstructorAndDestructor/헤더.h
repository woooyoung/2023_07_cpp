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
	//char name[100];
	char* name;
	int gender;
	//char rank[100];
	char* rank;

	Employee(char* name, int gender, char* rank) {
		this->name = new char[strlen(name) + 1]; // �ι��� ����
		this->rank = new char[strlen(rank) + 1];
		this->gender = gender;
		strcpy(this->name, name); // �ּҰ��� �ٸ��� ���� ���� �ٸ� �޸� �ּҿ� ����
		strcpy(this->rank, rank);
		this->no = number_counter;
		number_counter++;
	}

	~Employee() {
		delete[] name;
		delete[] rank;
		printf("%d�� ����� ���� �Ǿ����ϴ�.\n", no);
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