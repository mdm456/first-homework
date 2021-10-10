#include<stdio.h>
int main(){
	int n,y=1,i;
	scanf("%d",&n);
	if(n==0||n==1)
	   y=1;
	else for(i=1;i<=n;i++)
	{
		y=i*y;
	}
	printf("%dµÄ½×³ËÎª%d",n,y);
	return 0;
}
