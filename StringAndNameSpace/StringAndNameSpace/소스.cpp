// ¹®ÀÚ¿­
#define _CRT_SECURE_NO_WARNINGS
//std string
#include <cstdio>
//#include <cstring>
#include <string>

int main() {

	char myString[100];

	strcpy(myString, "Hello World!");

	strcat(myString, "Hello C++!");

	printf("%s\n", myString);

	return 0;
}