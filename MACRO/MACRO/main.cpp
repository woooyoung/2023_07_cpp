#include <cstdio>

#define SWAP(X, Y, T) T = X; X = Y; \
Y = T;

#define P(X,Y) X##Y

#define PI 3.141592

int is_even_number(int n) {
	return n % 2 == 0;
}

int main() {
	
	P(printf, ("Hello World!\n"));

	float pi = PI;

	//int rs = is_even_number(3);
	//printf("rs : %d\n", rs);

	//int v1 = 100;
	//int v2 = 200;
	//int temp;
	//printf("==value swap Àü==\n");
	//printf("v1 : %d\n", v1); // 100
	//printf("v2 : %d\n", v2); // 200

	////T = v1; //temp = v1;
	////v1 = v2;
	////v2 = temp;
	//SWAP(v1, v2, temp)

	//printf("==value swap ÈÄ==\n");
	//printf("v1 : %d\n", v1); // 200
	//printf("v2 : %d\n", v2); // 100

	return 0;
}
