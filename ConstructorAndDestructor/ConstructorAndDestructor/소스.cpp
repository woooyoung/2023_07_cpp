// Ŭ���� ������ / �Ҹ���
//#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable : 4996)

#include <cstdio>
#include <cstring>

//struct Student {
//};

class Student {
public: // Ŭ���� ���� ������ Ŭ���� �ܺο��� ������ �� �ֵ��� �ϱ� ����
	int student_no;
	char name[100];
	int gender; // 0-��, 1-��

	void printStudentInfo() {
		printf("�й� : %d\n", student_no);
		printf("�̸� : %s\n", name);
		printf("���� : %s\n", gender == 0 ? "����" : "����"); // �ζ��� ������
		// <������> ? ��1 : ��2
	}
};

int main() {
	// i = 50; �̶�� ���� ���� �ʰ� i���� �������ּ���
	int i = 20;
	int* p = &i;
	*p = 50;

	Student* ps = new Student();
	ps->student_no = 5678;
	strcpy(ps->name, "��μ�");
	ps->gender = 0;

	ps->printStudentInfo();

	delete ps;

	/*Student s1;
	s1.student_no = 1234;
	strcpy(s1.name, "��ö��");
	s1.gender = 0;

	s1.printStudentInfo();

	Student s2;
	s2.student_no = 4321;
	strcpy(s2.name, "�迵��");
	s2.gender = 1;

	s2.printStudentInfo();*/

	return 0;
}