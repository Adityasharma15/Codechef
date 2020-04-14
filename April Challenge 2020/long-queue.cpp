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

    vector<ll> vec;

    int temp;

    for(ll i = 0;i<n; i++)
    {
      cin >> temp;

      if(temp ==1)
        vec.push_back(i);
    }

    bool ans = true;

    for(ll i = 0;i<(vec.size() - 1)  && ans; i++)
    {
      if( (vec[i+1] - vec[i]) < 6)
        ans = false;
    }

    if(ans)
      cout << "YES" << "\n";

    else
      cout << "NO" << "\n";
	}
  return 0;
}
