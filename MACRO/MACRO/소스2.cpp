// 정수 다섯개의 평균을 구하는 매크로를 구현해주세요

#include <cstdio>

// 구현시작
#define AVERAGE(A, B, C, D, E) (A + B + C + D + E) / 5
// 구현끝 

int main() {
	int result = 0;
	
	//구현시작
	result = AVERAGE(1, 2, 3, 4, 5);
	//구현끝

	printf("result : %d\n", result);

	//구현시작
	result = AVERAGE(11, 22, 33, 44, 55);
	//구현끝

	printf("result : %d\n", result);

	return 0;
}