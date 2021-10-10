#include<stdio.h>
int ct=1;//记录步数，在步骤中输出
void move(int n,char from,char to)
{
	printf("第%2d步：把第%d个盘子：%c>>>%c\n",ct++,n,from,to);
 } 
int honoi(int n)//输出步数；
{
 	int cnt =2,ans=1;
 	if(n==1)
 	return 1;
 	else
 	return 2* honoi(n-1)+1;
}
void honoi_tower(int n,char x,char y,char z)//输出步骤
{
	if(n==1)
	move(1,x,z);
	else{
		honoi_tower(n-1,x,z,y);
		move(n,x,z);
		honoi_tower(n-1,y,x,z);
	}
 } 
 int main()
 {
 	int n;//盒子个数
	printf("请输入盒子个数：\n");
	scanf("%d",&n); 
	char x='A',y='B',z='C';
	int t=honoi(n);
	printf("一个需要%2d步：\n",t);
	honoi_tower(n,x,y,z);
	return 0;
 }

