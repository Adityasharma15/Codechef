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
    ll n , b , m;
    cin >> n >> b >> m;

    ll temp = -1;
    ll ans = 0;
    ll a;

    for(ll i = 0; i<m; i++)
    {
      cin >> a;
      ll val;

      if(a!=0)
        val = a/b;

      else
        val = 0;

      if(val!=temp)
          ans++;

      temp = val;
    }

    cout << ans <<"\n";
	}

  return 0;

}
