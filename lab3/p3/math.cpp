#include "Math.h"

int Math::Add(int x, int y)
{
	return x + y;
}

int  Math::Add(int x, int y, int z)
{
	return x + y + z;
}

int  Math::Add(double x, double y)
{
	return x + y;
}

int  Math::Add(double x, double y, double z)
{
	return x + y + z;
}

int  Math::Mul(int x, int y)
{
	return x + y;
}

int  Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

int  Math::Mul(double x, double y)
{
	return x * y;
}

int  Math::Mul(double x, double y, double z)
{
	return x * y * z;
}

int  Math::Add(int count, ...) // sums up a list of integers
{
	int s = 0;
	va_list lista;
	va_start(lista, count);
	for (int i = 0; i < count; i++)
		s = s + va_arg(lista, int);
	va_end(lista);
	return s;
}

char* Math::Add(const char* x, const char* y)
{
	int a, b;
	a = atoi(x);
	b = atoi(y);
	a = a + b;
	char s[100];
	itoa(a, s, 10);
	char* q = s;
	return q;
}
