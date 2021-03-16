#include "callbacklib.h"

int add(int x, int y)
{
	return x + y;
}

int minus(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

void caller(DUCallbackType callback)
{
	int callbackResult = callback(7, 700);
}

int cbimpl(int x, int y)
{
	return 70 + x + y;
}