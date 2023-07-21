#include <cstdio>
#include <cmath> // sin(), cos(), tan(), exp(), log(), pow()
#include <cstdlib> // malloc, free, rand
#include <ctime> // time, clock -> 의사 난수 시드 설정

struct Person {
	int age;
	char name[100];
};

int add(int a, int b);