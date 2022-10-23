#include "Header.h"
int add(int a, int b)
{
	return a + b;
};
int sub(int a, int b)
{
	return a - b;
};
int multi(int a, int b)
{
	return a * b;
};
int divide(int a, int b)
{
	return a / b;
};
int degree(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; ++i)
	{
		result = result * a;
	}
	return result;
};