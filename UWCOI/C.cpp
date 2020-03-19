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
		
    ll n;
    cin >> n;
    
    string s;
    
    for(ll i = 0; i<n; i++)
    {
    	cin >> s;
	}

	ll ans = (n*(n+1))/2;
	
	cout << ans << "\n";


	}

}
