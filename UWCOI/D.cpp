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
	
	ll n, m, q;
	cin >> n >> m >> q;
	
	ll k;
	
	ll arr[n][m];
	
	for(ll i = 0; i<n; i++)
	{
		for(ll j = 0; j<m; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	ll temp;
	
	ll a, b, c;
	
	for(ll i = 0; i<q ; i++)
	{
		cin >> a >> b >> c;
		
	k = arr[0][0];
	
	if(k <= c)
		cout << "0" << "\n";
    

	if(k > c)
		cout << m*n << "\n";
	}
	
	


	}

}
