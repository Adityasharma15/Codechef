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

						ll first, last;

				first = v[0];
				last = v[v.size()-1];


		if(maxicount == 1)
		{
			ans = n/2;
			solved = true;
		}

		else
		{
			if( first <(n/2) && last < (n/2))
			{
					ll mindist = (last - first);

					if(mindist > (n/2))
						mindist = n - (last - first);

					if(!solved)
						{
							ans = (n/2) - mindist;
							solved = true;
						}
				}

				else if(first >= (n/2) && last >= (n/2))
				{

				if(!solved)
				{
					ans = (n-1) - last;
					ans++;
					solved = true;
				}
				}

				else
				{
						ll temp = (n-1) - last;

						ll temp2 = ((n/2) - 1) - first;

						if(!solved)
						{
							ans = temp2 - temp;
							solved = true;
						}

				}

		}


		cout << ans << "\n";

	}

}
