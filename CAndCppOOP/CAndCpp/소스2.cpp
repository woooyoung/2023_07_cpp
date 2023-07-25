// 상속(inheritance)

struct Animal {
	int age = 10;
	int legs = 0;
	int arms = 0;
};

struct Person : public Animal{
	Person() {
		int legs = 2;
		int arms = 2;
	}
};

struct Dog : public Animal {
	Dog() {
		int legs = 4;
		int arms = 0;
	}
};

#include <cstdio>

int main() {

	Person p1;
	
	printf("p1.age : %d\n", p1.age);
	printf("p1.legs : %d\n", p1.legs);
	printf("p1.arms : %d\n", p1.arms);

	Person* person;

	Animal* animal;

	animal = person;

	person = (Person*) animal; // casting -> 형변환

	return 0;
}