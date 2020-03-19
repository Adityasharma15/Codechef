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
	
	ll a[n], b[n];
	
	for(ll i = 0; i< n; i++)
		cin >> a[i];
		
	for(ll i = 0; i<n ;i++)
		cin >> b[i];
		
	sort(a , a + sizeof(a)/sizeof(a[0]));
	sort(b , b + sizeof(b)/sizeof(b[0]));
	
	ll ans = 0;
	
	for(ll i = 0; i<n; i++)
	{
		ans+= min(a[i], b[i]);
	}
    
    cout << ans << "\n";

	}
}

