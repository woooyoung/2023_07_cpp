// Ŭ���� ������ / �Ҹ���
#pragma warning (disable : 4996)

#include <cstdio>
#include <cstring>

class Student {
public:
	int student_no;
	//char name[100];
	char* name;
	int gender; // 0-��, 1-��

	Student(int StdNo, const char* n, int g) {  // ������ : �������ڸ��� �Ķ���͸� �̿��ؼ� ���� �ʱ�ȭ�� �־��ش�.
		printf("������ �����\n");
		this->student_no = StdNo;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		gender = g;
	}

	~Student() { // �Ҹ��� : Ŭ���� �ν��Ͻ��� �ı��� �� -> �޸𸮿��� ������ ��
		printf("%s�� �Ҹ��� ȣ���\n", name);
		delete[] name;
	}

	void printStudentInfo() {
		printf("�й� : %d\n", student_no);
		printf("�̸� : %s\n", name);
		printf("���� : %s\n", gender == 0 ? "����" : "����");
	}
};

int main() {

	Student* ps = new Student(5678, "��μ�", 0);

	/*ps->student_no = 5678;
	strcpy(ps->name, "��μ�");
	ps->gender = 0;*/

	ps->printStudentInfo();

	delete ps;

	Student* ps2 = new Student(1234, "�����", 1);

	ps2->printStudentInfo();

	delete ps2;

	Student ps3 = Student(78911, "��ö��", 0);

	ps3.printStudentInfo();



	return 0;
}