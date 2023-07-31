#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
#include <iostream>

int main() {

	std::string str1 = "apple";
	std::string str2 = "apple";

	/*if (str1.compare(str2) == 0) {
		printf("두 문자열은 같습니다.\n");
	}
	else {
		printf("두 문자열은 다릅니다\n");
	}*/

	if (strcmp(str1.c_str(), str2.c_str()) == 0) {
		printf("두 문자열은 같습니다.\n");
	}
	else {
		printf("두 문자열은 다릅니다\n");
	}

	return 0;
}