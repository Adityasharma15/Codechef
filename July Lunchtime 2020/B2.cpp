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

      ll peelayer = max(x,y);

        ll count = 0;
        //cooll
        ll a = m/2;
        ll b = m - a;

        //raww
        ll a1 = n/2;
        ll b1 = n - a1;

        // cout << a << b << " " << a1 << " " << b1;
        ll maxrow = b1*b;
        ll minrow = a1*a;

        ans += b1*b*max(x,y);
        ans += a1*a*max(x,y);
        count = b1*b + a1*a;

        ll left = n*m - count;
        ans += left*(min(x,y - peelayer));

        if(n == 0 || m == 0)
        {
          cout << "0\n";
          continue;
        }

        cout << ans << "\n";
	}

  return 0;
}
