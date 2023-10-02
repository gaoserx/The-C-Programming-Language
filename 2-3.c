#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//十六进制转十进制
double htoi(char *arr ,int sz)
{
	double num = 0;
	
	while (sz)
	{
		double temp = 0;
		if (*arr <= '9' && *arr >= '0')
		{
			
			temp = ( *arr - 48) * pow(16,sz - 1);
		}
		else if (*arr <= 'f' && *arr >= 'a')
		{
			temp = (*arr - 87) * pow(16, sz - 1);
		}
		else if (*arr <= 'F' && *arr >= 'A')
		{
			temp = (*arr - 55) * pow(16, sz - 1);
		}
		num += temp;
		arr++;
		sz--;
	}
	return num;
}

int main()
{
	char arr[] = "0x123";
	int sz = strlen(arr);
	printf("%f", htoi(arr,sz));
	return 0;
}