#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;
	cin >> t;

	while(t--)
	{

		string s;
		cin >> s;

		ll len = s.length();

		ll arr[len];


		for(ll i = 0 ; i<len ; i++)
		{
			if(s[i]=='.')
				arr[i]= 0;

			else
			{
				arr[i]=int(s[i]) - 48 ;
			}
		}
	
		for(ll i =0; i<len; i++)
			cout << arr[i]<<"\n";








	}




}