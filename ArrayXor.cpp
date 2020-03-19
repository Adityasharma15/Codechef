#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll Xor(ll x, ll y) 
{ 
return (x | y) & (~x | ~y); 
} 

int main()
{
	ll int t;
	cin >> t;

	while(t--)
	{
		ll n, k;
		cin >> n >> k;

		ll arr[n];

		for(ll i = 0;i<n;i++)
			cin >> arr[i];

		for(ll i =0; i<k; i++)
		{
			ll x = i%n;
			arr[x]=Xor( arr[x] , arr[n-x-1] );
		}

		for (int i = 0; i < n; ++i)
			cout << arr[i] << " ";

		cout << endl;
	}
}