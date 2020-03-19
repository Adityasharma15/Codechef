#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);


	ll t;
	cin >> t;

	while(t--)
	{
		ll n, k;
		cin >> n >> k;

		ll x, temp = 0;

		for(ll i = 0; i<(n-1); i++)
		{
			cin >> x;
			temp += x%k;
		}

		cin >> x;
		temp += x;

		ll ans = temp%k;

		cout << ans << "\n";

	}

}
