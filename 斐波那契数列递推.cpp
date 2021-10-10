#include<stdio.h>
int main()
{
	int a1,a2;
	a1=a2=1;
	int temp;
	long n;
	long i;
	scanf("%ld",&n);
	for(i=1;i<n;i++)
	{
		temp=a2;
		a2=a1+a2;
		a1=temp;
	} 
	printf("%d\n",a1);
	return 0;
}
