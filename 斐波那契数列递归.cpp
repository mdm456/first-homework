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
	int n;//���������ֵ
	while (1)
	{
		cout<<"������n��ֵ��";
		cin>>n;
		if(n<0){
			cout<<"n��ֵ����С��0������������"<<endl;
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
