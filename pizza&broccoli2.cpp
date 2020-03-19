#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll t;
	cin >> t;
	
	while(t--)
	{
		ll n;
		cin >>n;
		
		ll k;
		cin >> k;
		
		string s;
		cin >> s;
		
		ll max = 0;
		
		ll count = 0;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int flag=0;
			if(s[i]=='1')
			{
				v.push_back(i);
			}
		}
		for(int i=0;i<v.size()-1;i++)
		{
			int flag=v[i]-v[i+1];
			if(flag)
		}
		
	}
	
	
}
