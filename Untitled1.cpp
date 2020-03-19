#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	map <string,int> hash;
	while(t--)
	{
		int r;
		string str;
		cin>>r>>str;
		int sum=0;
		for(int i=0;i<str.length();i++)
		{
			sum+=str[i];
		}
		hash[sum1]=str;
		sum=0;
	}
	
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		string z;
		cin>>z;
		int sum1=0;
		for(int i=0;i<z.length();i++)
		{
			sum1+=str[i];
		}
		cout<<hash[sum1]<<endl;
		sum1=0;
	}
	return 0;
}
