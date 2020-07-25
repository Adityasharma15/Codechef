#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll stob(string s)
{
    bitset<64> b(s);
    return b.to_ullong();
}


string btostring(ll x)
{
  string s = bitset<64> (x).to_string();
  const auto pos1 = s.find('1');

  if(pos1 !=  string::npos)
    return s.substr(pos1);

  return "0";
}

ll bconc( ll a, ll b)
{
  string ax = btostring(a);
  string bx = btostring(b);

  string ax2 = ax+bx;
  string bx2 = bx+ax;

  ll a1 = stob(ax2.length(), ax2);
  ll b1 = stob(bx2.length(), bx2);

  return (a1 - b1);
}

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

    vector<ll> vec(n);

    for(ll i = 0; i<n ; i++)
      cin >> vec[i];

    ll maxx = INT_MIN;

    for(ll i = 0; i<n; i++)
    {
      for(ll j = 0; j<n; j++)
      {
        if(i == j)
          continue;

        ll temp = bconc(vec[i], vec[j]);
        maxx = max(maxx, temp);
      }
    }
    cout << maxx << "\n";
	}
  return 0;
}
