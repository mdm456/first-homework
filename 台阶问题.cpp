#include<stdio.h>
#include<stdlib.h>
int f(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return f(n - 1) + f(n - 2);
}
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		printf("����%d�����ݹ���%d�ַ���.\n", n, f(n));
	}
	system("pause");
	return 0;
}

