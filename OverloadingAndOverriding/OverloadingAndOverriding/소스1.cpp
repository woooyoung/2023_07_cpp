#define _CRT_SECURE_NO_WARNINGS
// ������ �����ε�
#include <cstdio>
#include <cstring>

class Student {
public:
	int student_no;
	char student_name[100];

	Student() {
		student_no = 0;
		strcpy(student_name, "��ö��");
	}

	Student(int studentNo, const char* studentName) {
		this->student_no = studentNo;
		strcpy(this->student_name, studentName);
	}

	void printInfo() {
		printf("%s �л��� �й� : %d\n", student_name, student_no);
	}
};

int main() {

	Student* s1 = new Student();
	Student* s2 = new Student(10, "�����");

	s1->printInfo();
	s2->printInfo();

	return 0;
}