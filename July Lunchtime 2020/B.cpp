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

    if(y%2==0)
        ans = min(half,x)*n*m;

    else
    {
      ll second = y/2, first = y - second;
      if(x >= first)
      {
        ll count = 0;
        ll a = m/2;
        ll b = m - a;
        ll a1 = n/2;
        ll b1 = n - a1;

        // cout << a << b << " " << a1 << " " << b1;
        ans += b1*b*first;
        ans += a1*a*first;
        count = b1*b + a1*a;
        ll left = n*m - count;
        ans += left*second;
      }

      else
      {
        ans = min(second, x)*n*m;
      }
    }

    cout << ans << "\n";

	}

  return 0;

}
