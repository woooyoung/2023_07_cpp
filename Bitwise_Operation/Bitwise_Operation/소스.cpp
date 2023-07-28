// 비트와이즈 연산 -> 비트를 기준으로 연산
// Bitwise or -> |
// Bitwise and -> &
// Shift

#include <cstdio>

int main() {

	int v1 = 1; // 0001
	int v2 = 3; // 0011

	int bitwise_or = v1 | v2;
	printf("%d\n", bitwise_or);

	int bitwise_and = v1 & v2;
	printf("%d\n", bitwise_and);

	/*int v1 = 1;
	int v2 = 2; // 0010

	int bitwise_or = v1 | v2;
	printf("%d\n", bitwise_or);

	int bitwise_and = v1 & v2;
	printf("%d\n", bitwise_and);*/


	return 0;
}