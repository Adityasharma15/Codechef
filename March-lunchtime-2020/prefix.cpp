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
	string s;
  cin >> s;

  ll k, x;
  cin >> k >> x;

  unordered_map<char, ll> mp;

  ll i;

  ll len = 0;

  for(i = 0; i<s.length(); i++)
  {
      if(mp[s[i]] < x)
      {
        mp[s[i]]++;
        len++;
        continue;
      }

      if(mp[s[i]] >=x)
      {
        if(k>0)
        {
          k--;
          continue;
        }

        else
        {
          break;
        }

      }
  }
  //
  // for(auto j:mp)
  // {
  //   cout << j.first << " " << j.second << "\n";
  // }

  cout << len << "\n";


	}

}
