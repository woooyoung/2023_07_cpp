// std string -> const char*, char* , �迭 ������ ���ڿ��� �Ҵ� ���� �� �ִ�.
// ���� ��ȣ�� �̿��ؼ� ���ڿ� �̾� ���̱Ⱑ �����ϴ�
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>
#include <iostream>


// std::string �� ����ڰ� �޸� ����, �迭 ������ ���� �ʰ� ���ϰ� ������ �������.

int main() {

	std::string myStr = "Hello World!"; // ������ �����ε�
	myStr = myStr + "Hello C++!";

	//std::string* myStrPointer; // ���� ������ ������µ� �����Ҵ�??

	printf("%s\n", myStr.c_str());
	std::cout << myStr;

	return 0;
}