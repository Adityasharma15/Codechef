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

    ll n, m;
    cin >> n >> m;

    ll a[n];

    set<ll> sett;

    for(ll i = 0; i<n; i++)
    {
        cin >> a[i];
        sett.insert(a[i]);
    }


    bool arr[m+1];

		memset(arr, true, sizeof(arr));

    ll p;

		for(p = 2 ; p*p<=n; p++ )
	    {
	    	for(int x = 2; x*p<=n; x++)
	    	{
	    		arr[p*x]=false;
			}

		}

    ll ans = m + 1, temp;

    bool flag = false;

    for(ll i = m; i>=2; i--)
    {
      if(arr[i] == true && sett.find(i) == sett.end())
      {
          temp = i;
          ans = min(ans , temp);
          flag = true;
      }
    }

    if(flag == false)
      ans = 1;

    cout << ans << "\n";

	}

}
