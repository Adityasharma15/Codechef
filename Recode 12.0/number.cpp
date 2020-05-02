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

    ll arr[n];

    map<ll , vector<ll>> mapp;

    for(ll i = 0;i <n; i++)
    {
        cin >> arr[i];
        mapp[arr[i]].push_back(i);
    }

    ll maxxans = INT_MIN;
    ll ans = 0;
    ll tempans = 0;

    for(auto i: mapp)
    {
      tempans = 0;

      for(ll j = 0; j<i.second.size(); j++)
      {
          tempans++;

          if( j!=(i.second.size() - 1) && (i.second[j+1] - i.second[j]) == 1)
              {
                j= j+1;
              }
      }

      if(tempans>maxxans)
      {
        maxxans = tempans;
        ans = i.first;
      }

    }

    cout << ans << "\n";
	}

  return 0;
}
