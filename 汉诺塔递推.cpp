#include<stdio.h>
int ct=1;//��¼�������ڲ��������
void move(int n,char from,char to)
{
	printf("��%2d�����ѵ�%d�����ӣ�%c>>>%c\n",ct++,n,from,to);
 } 
int honoi(int n)//���������
{
 	int cnt =2,ans=1;
 	if(n==1)
 	return 1;
 	else
 	return 2* honoi(n-1)+1;
}
void honoi_tower(int n,char x,char y,char z)//�������
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
 	int n;//���Ӹ���
	printf("��������Ӹ�����\n");
	scanf("%d",&n); 
	char x='A',y='B',z='C';
	int t=honoi(n);
	printf("һ����Ҫ%2d����\n",t);
	honoi_tower(n,x,y,z);
	return 0;
 }

