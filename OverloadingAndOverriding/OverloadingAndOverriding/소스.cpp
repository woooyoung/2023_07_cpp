// �����ε� : ������ �̸��� ���������� �ٸ� ������ �ϰ� ����� ��
// �����ε� : ����Ÿ��, �Ķ������ ������ Ÿ�Կ� ���� �Լ��� ������ �� �ִ�
// -> Ŭ���� ���ο����� �����ϰ� ����ȴ�. Ŭ���� ������ �Լ��� ����
// ������(�Լ����) ���� -> Ŭ������ �������� �����ڸ� ���� �� �ִ�.
#include <cstdio>

int sum(int a, int b) {
	printf("sum(int,int)");
	return a + b;
}

float sum(int a, float b) {
	printf("sum(int,float)");
	return a + b;
}

int sum(int a, int b, int c) {
	printf("sum(int,int,int)");
	return a + b + c;
}

int main() {

	int rs = sum(100, 200);
	printf("rs : %d\n", rs);

	rs = sum(100, 200,300);
	printf("rs : %d\n", rs);

	float f = sum(100, 3.14f);
	printf("f : %f\n", f);

	return 0;
}