#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//celsius = 5 * (fahr - 32) / 9

float invertcelsius(float fahr)
{
	return 5.0 * (fahr - 32.0) / 9;
}

//diverse
int main()
{
	float fahr;
	printf("fahr\tcelsius\n");
	for (fahr = 300.0; fahr >= 0; fahr -= 20)
	{
		printf("%3.0f\t%6.2f\n", fahr, invertcelsius(fahr));
	}
	printf("%3.0f\t%6.2f\n", 1.0, invertcelsius(1.0));
	return 0;
}