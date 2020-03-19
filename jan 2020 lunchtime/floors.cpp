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
        ll n , a, b, c;

        cin >> n >> a >> b >> c;

        ll x;

        ll mini = INT_MAX;

        for(ll i = 0; i< n; i++)
        {
            cin >> x;
            
            mini = min(mini,( abs(b-x) + abs(x-a) + c));
            
        }

        cout << mini << "\n";

        }

	}
