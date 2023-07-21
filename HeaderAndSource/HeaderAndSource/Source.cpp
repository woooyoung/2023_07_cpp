#include "Header.h"

int main() {

	int v1 = 100;
	int v2 = 200;

	int rs = add(v1,v2);

	printf("rs : %d\n", rs);

	struct Person p1;
	p1.age = 22;

	printf("p1.age : %d\n", p1.age);

	/*printf("%f\n",pow((2.0),10));
	printf("%f\n", sin(1));
	srand(time(0));
	printf("%d\n", rand() % 100);

	int k = add(10, 20);
	printf("k : %d\n", k);*/

	return 0;
}

int add(int a, int b) {
	return a + b;
}

