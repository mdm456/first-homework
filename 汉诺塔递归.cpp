#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int counts=0;
void honoi(int n,char a,char b,char c)//n�����ӣ���a��ͨ��b�������ƶ���c�� 
{
	if(n==0) 
	return ;
	honoi(n-1,a,c,b);
	counts++;
	cout<<counts<<" "<<a<<"->"<<endl;
	honoi(n-1,b,a,c);
}
int main()
{
	int n;
	cin>>n;
	honoi(n,'A','B','C');
	cout<<"һ���ƶ��ˣ�"<<counts<<"��"<<endl;
	return 0;
}

