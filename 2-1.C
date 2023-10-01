#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>

int main() {
	printf("Unsigned char max: %d\n", UCHAR_MAX);
	printf("Signed char max: %d\n", SCHAR_MAX);
	printf("Signed char min: %d\n", SCHAR_MIN);

	unsigned int i = ~0;
	printf("Unsigned int max: %u\n", i);
	printf("Signed int max: %d\n", i / 2);
	printf("Signed int min: %d\n", (i / 2) + 1);
	//0111 1111 1111 1111 1111 1111 1111 1111
	//1000 0000 0000 0000 0000 0000 0000 0000
	//1111 1111 1111 1111 1111 1111 1111 1111
	//0001 0000 0000 0000 0000 0000 0000 0000 
}