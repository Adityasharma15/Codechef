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

    vector<ll> v;

    ll temp;

    for(ll i = 0; i<n; i++)
    {
      cin >> temp;
      v.push_back(temp);
    }

    sort(v.begin(), v.end(), greater<int>());

    ll profit = 0;

    for(ll i = 0; i<v.size(); i++)
    {
      if((v[i]-i)>0)
      profit += v[i]-i;
    }

    profit = profit%1000000007;

    cout << profit << "\n";

	}

  return 0;

}
