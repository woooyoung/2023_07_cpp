// c�� c++ �� ����
// c++�� ��� c�� ������ ��� ��ü������ �߰��ϸ� ����� ���� ����ӵ��� ������
// �Ϲ������� �ٸ� ��ü���� ���� Ŭ������ ������ ������ �� ����. -> ��� �Լ��� Ŭ���� ���ο� ����
// c++ �� ��ü������ �����ϸ鼭 Ŭ������ ��� ���������� ������ �� �ִ�. (php js)

#include <iostream>
#include <cstdlib>

struct Person {
	int age;
	int hp;
};

int main() {

	//Person* p1 = (Person*)malloc(sizeof(Person));
	//free(p1);

	Person* p1 = new Person();
	delete p1;

	//int* arr = (int*)malloc(sizeof(int) * 10);
	//free(arr);
	
	int* arr = new int[10];
	delete[] arr;

	printf("Hello World!\n");

	//std::cout << "Hello World!\n" << std::endl;


	return 0;
}