#include<stdio.h>
int main()
{
	int a = 1;
	int n = 10;
	int i = 0;
	for (i = 1; i < n; i++)
	{
		a = (a + 1) * 2;
	}
	
	printf("%d", a);
	return 0;
}