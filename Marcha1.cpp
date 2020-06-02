#include<bits/stdc++.h>
#define ll long long
using namespace std;


bool foundsum(vector<ll> &vec, ll number, ll reqsum)
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

  if(sum==reqsum)
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
    ll n , sum;
    cin >> n >> sum;

    vector<ll> vec(n);

    for(ll i = 0; i<n; i++)
      cin >> vec[i];

    ll end = (1<<n) - 1;

    // cout << "End " << end << "\n";

    bool found = false;

    for(ll i = 0; i<=end; i++)
    {
          if(foundsum(vec, i, sum))
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
