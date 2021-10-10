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
		printf("登上%d个阶梯共有%d种方法.\n", n, f(n));
	}
	system("pause");
	return 0;
}

