// ���� �ټ����� ����� ���ϴ� ��ũ�θ� �������ּ���

#include <cstdio>

// ��������
#define AVERAGE(A, B, C, D, E) (A + B + C + D + E) / 5
// ������ 

int main() {
	int result = 0;
	
	//��������
	result = AVERAGE(1, 2, 3, 4, 5);
	//������

	printf("result : %d\n", result);

	//��������
	result = AVERAGE(11, 22, 33, 44, 55);
	//������

	printf("result : %d\n", result);

	return 0;
}