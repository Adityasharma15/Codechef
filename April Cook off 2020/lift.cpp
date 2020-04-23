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

    ll curr =0;

    ll n, q;
    cin >> n >> q;

    ll ans = 0;

    ll a, b;

    for(ll i = 0; i<q; i++)
    {
       cin >> a >> b;

       ans += abs(a-curr);

       // cout << "ans " << ans << "\n";
       ans += abs(b-a);

       // cout << "ans " << ans << "\n";

       curr = b;
    }

    cout << ans << '\n';

	}

  return 0;

}
