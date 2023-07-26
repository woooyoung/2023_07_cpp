// 클래스 생성자 / 소멸자
#pragma warning (disable : 4996)

#include <cstdio>
#include <cstring>

class Student {
public:
	int student_no;
	//char name[100];
	char* name;
	int gender; // 0-남, 1-여

	Student(int StdNo, const char* n, int g) {  // 생성자 : 생성되자마자 파라미터를 이용해서 값을 초기화해 넣어준다.
		printf("생성자 실행됨\n");
		this->student_no = StdNo;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		gender = g;
	}

	~Student() { // 소멸자 : 클래스 인스턴스가 파괴될 때 -> 메모리에서 해제될 때
		printf("%s의 소멸자 호출됨\n", name);
		delete[] name;
	}

	void printStudentInfo() {
		printf("학번 : %d\n", student_no);
		printf("이름 : %s\n", name);
		printf("성별 : %s\n", gender == 0 ? "남자" : "여자");
	}
};

int main() {

	Student* ps = new Student(5678, "김민수", 0);

	/*ps->student_no = 5678;
	strcpy(ps->name, "김민수");
	ps->gender = 0;*/

	ps->printStudentInfo();

	delete ps;

	Student* ps2 = new Student(1234, "김민희", 1);

	ps2->printStudentInfo();

	delete ps2;

	Student ps3 = Student(78911, "김철수", 0);

	ps3.printStudentInfo();



	return 0;
}