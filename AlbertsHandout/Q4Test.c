#include <stdio.h>

void test1(void);
void test2(void);
void test3(void);


int main(void){
	test1();
	test2();
	test3();

	return 0;
}


void test1(void){
	char a[] = "hello";
	char *p = "world";
	p = &a[1];
	printf("Test 1: %s", p);
}

void test2(void){
	char a[] = "hello";
	char *p = "world";
	p[1] = *a;
	printf("Test 2: %s", p);
}

void test3(void){
	char a[] = "hello";
	char *p = "world";
	a = p;
	printf("Test 3: %s", p);
}