#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool foundsum(vector<ll> &vec, ll number)
{
  ll i = 0;
  ll sum = 0;
  
  while(number>0)
  {
    if(number&1)
      sum+=vec[i];

    i++;
    number= number>>1;
  }

  if(sum==0)
    return true;

  return false;
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
    vector<ll> vec(4);

    for(ll i = 0; i<4; i++)
      cin >> vec[i];

    ll end = (1<<4) - 1;

    // cout << "End " << end << "\n";
    bool found = false;

    for(ll i = 1; i<=end; i++)
    {
          if(foundsum(vec, i))
          {
            found = true;
            break;
          }
    }

    if(found)
        cout << "Yes\n";

    else
      cout << "No\n";
	}

  return 0;
}
