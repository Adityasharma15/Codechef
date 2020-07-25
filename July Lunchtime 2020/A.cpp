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

    ll n,k;
    cin >> n >> k;

    string ans = "";

    for(ll i = 0; i<n; i++)
    {
      ll temp;
      cin >> temp;

      if(temp%k==0)
        ans += '1';

      else
        ans += '0';
    }

    cout << ans << "\n";

	}

  return 0;

}
