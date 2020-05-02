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
    cin>>n;

    ll arr[n];

    set<ll> sett;
    vector<ll> vsett;
    map<ll, vector<ll>> mapp ;

    for(ll i = 0; i<n; i++)
    {
        cin >> arr[i];
        sett.insert(arr[i]);
        mapp[arr[i]].push_back(i);
    }

    ll maxdist = INT_MIN, currdist;

    for(auto i:sett)
    {
      vsett.push_back(i);
    }

    ll ans = 0;

    ll currel, prevel, locpre;

    bool flag = false;

    for(ll i = 0;i < (vsett.size()-1); i++)
    {
      prevel = vsett[i];
      locpre = mapp[prevel][0];
      currel = vsett[i+1];

      flag = false;

      for(auto j: mapp[currel])
      {
          if(j > locpre)
            flag = true;
      }

      if(!flag)
        ans++;

    }

    cout << (ans+1) << "\n";

	}

  return 0;
}
