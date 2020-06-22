// Codechef Max Mex 

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
    ll n , m;
    cin >> n >> m;
    vector<ll> array(n);
    unordered_map<ll,ll> mapp;
    ll temp;

    for(ll i = 0; i<n; i++)
    {
      cin >> array[i];
      mapp[array[i]]++;
    }

    // sort(array.begin(), array.end());

    bool ans = true;
    for(ll i = 1; i<=(m-1); i++ )
    {
        if(mapp[i]==0)
        {
          ans = false;
          break;
        }
    }

    if(!ans)
    {
      cout << "-1\n";
    }

    else
    {
      if(mapp[m]>0)
      {
        cout << (n-mapp[m])<<"\n";
      }

      else
      {
        cout << n << "\n";
      }
    }
	}
  return 0;
}
