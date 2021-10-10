#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int counts=0;
void honoi(int n,char a,char b,char c)//n个盘子，从a柱通过b柱辅助移动到c柱 
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
	cout<<"一共移动了："<<counts<<"次"<<endl;
	return 0;
}

