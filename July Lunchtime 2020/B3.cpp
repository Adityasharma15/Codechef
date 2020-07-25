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
		ll n, m, x, y;
    cin >> n >> m >> x >> y;

    ll ans = 0;
    ll half = y/2;

    if(n*m == 1)
    {
      cout << x << "\n";
      continue;
    }

    ll second = y/2, first = y - second;

        ll count = 0;
        ll a = m/2;
        ll b = m - a;
        ll a1 = n/2;
        ll b1 = n - a1;

        // cout << a << b << " " << a1 << " " << b1;
        ans += b1*b*min(x,y);
        ans += a1*a*min(x,y);
        count = b1*b + a1*a;
        ll left = n*m - count;
        ans += left*(min(x,(y-min(x,y))));
        cout << ans << "\n";
	}

  return 0;

}
