#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
bool find(const char *str,int n)
{
	size_t len=strlen(str);
    bool result =true;
    if(len==0||len==1)
    return true;
    else
    for(size_t i=0;i<len/2;i++)
    if(str[i]!=str[len-i-1])
    result=false;
    return result;
}
int main()
{
	string str[4]={"abcdeabcde","aba","uestc","aaabbbcccbbbaaa"};
	for(int i=0;i<4;i++)
	{
		cout<<str[i]<<endl;
		if(find(str[i].c_str(),str[i].length()))
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
}
