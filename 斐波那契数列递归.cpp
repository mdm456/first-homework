#include<iostream>
using namespace std;
int Fibonacci(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return Fibonacci(n-1)+Fibonacci(n-2);
}
int main()
{
	int n;//接受输入的值
	while (1)
	{
		cout<<"请输入n的值：";
		cin>>n;
		if(n<0){
			cout<<"n的值不能小于0，请重新输入"<<endl;
		}
		else
		{
			cout<<"F("<<n<<")="<<Fibonacci(n)<<endl;
		}
	 } 
	//cin>>n;
	//cout<<fibonacci(n)<<endl;
	system("pause");
	return 0;
}
