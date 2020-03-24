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

		ll arr[n];

		ll maxi = -1;

		for(ll i = 0; i<n; i++)
		{
			cin >> arr[i];

			if(arr[i] > maxi)
				maxi = arr[i];
		}

		vector<ll> v;
		ll maxicount = 0;

		for(ll i = 0; i<n; i++)
		{
			if(arr[i] == maxi)
			{
				v.push_back(i);
				maxicount++;
			}
		}

		ll ans;
		bool solved = false;

		if(maxicount == 1)
		{
			ans = n/2;
			solved = true;
		}


		else
		{
					ll first, last;

					first = v[0];
					last = v[v.size()-1];

					ll mindist = (last - first);

					if(mindist > (n/2))
						mindist = n - (last - first);

					if(!solved)
						ans = (n/2) - mindist;

		}


		cout << ans << "\n";

	}

}
