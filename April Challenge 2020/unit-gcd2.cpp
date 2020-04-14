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

      //what if n == 1;
      if(n!=1)
      cout << (n/2) << "\n";

      else
        cout << "1" << "\n";

      ll temp = 1;

      map<ll, vector<ll> > mapp;

      mapp[1].push_back(1);

      for(ll i = 1; i<=(n/2); i++)
      {
          temp = 2*i;

          if(temp<=n)
          mapp[i].push_back(temp);

          temp++;

          if(temp<=n)
          mapp[i].push_back(temp);
      }

      for(auto i: mapp)
      {
        cout << i.second.size() << " ";

        for(auto j:i.second)
          cout << j << " ";

        cout << "\n";
      }

	}

  return 0;

}
