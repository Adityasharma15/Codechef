#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int rate[26]={0};
		for(int i=0;i<26;i++)
		{
			cin >> rate[i];
		}
		int alp[26]={0};
		string s;
		cin >> s;
		for(int i=0;i<s.length();i++)
		{
			alp[s[i]-'a']=1;
		}
		int sum=0;
		for(int i=0;i<26;i++)
		{
			if(alp[i]==0)
			{
				sum+=rate[i];
			}
		}
		cout << sum << endl;
	}
}
