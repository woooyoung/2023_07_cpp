#include <cstdio>

//#define EXECUTE_NUM 0
#define EXECUTE_NUM

//#if EXECUTE_NUM == 1
//#ifdef EXECUTE_NUM
#ifndef EXECUTE_NUM
int main() {

	printf("Hello 0");

	return 0;
}
#else
int main() {

	printf("Hello 1");

	return 0;
}
#endif