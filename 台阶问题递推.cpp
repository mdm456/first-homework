#include<iostream>
using namespace std;
int fun(int n)
{
	if(n==1)
	return 1;
	else if(n==2)
	return 2;
	
	int prePre =1;
	int pre =2;
	int result=0;
	
	for(int i=3;i<=n;++i)
	{
		result =prePre +pre;
		prePre=pre;
		pre =result;
	}
	return result;
}
int main(){
	cout<<fun(10);
}
