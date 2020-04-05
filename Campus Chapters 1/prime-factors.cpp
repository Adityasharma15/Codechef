#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool factors(ll n, ll k)
{
  vector<ll> v;

    while(n%2==0)
    {
      v.push_back(2);
      n/=2;
    }

    if(v.size() >=k)
      return true;

    for(ll i = 3;i*i<=(n); i+=2)
    {
        while(n%i==0)
        {
          n = n/i;
          v.push_back(i);
        }

        if(v.size() >=k)
          return true;
    }

    if(n>2)
      v.push_back(n);

    if(v.size() >=k)
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
		  ll n, k;
      cin >> n >> k;

      bool answered = false;

      if(n<k)
      {
        answered = true;
        cout << "0" << "\n";
      }

      bool ok = factors(n,k);

      if(!ok && !answered)
      {
        answered = true;
        cout << "0" << "\n";
      }

      if(ok && !answered)
        cout << "1" << "\n";
  }

  return 0;
}
