//namespace
#include <iostream>
#include <vector>

namespace kim {
	void exam1();

	class Person {
	public:
		Person();

		void printInfo(int i, const char* str);
	};
}

namespace park {
	void exam1();

	class Person {
	public:
		Person();
	};
}

int main() {
	kim::exam1();
	park::exam1();

	std::vector<int> myvec;

	return 0;
}

void kim::exam1() {
	printf("김철수가 만든 함수 exam1\n");
}

void park::exam1() {
	printf("박민수가 만든 함수 exam1\n");
}

kim::Person::Person() {

}

park::Person::Person() {

}

void kim::Person::printInfo(int i, const char* str) {

}