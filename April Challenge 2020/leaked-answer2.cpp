#include<bits/stdc++.h>
#define ll long long
#define testcases ll t; cin >> t; while(t--)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	testcases
  {
		ll n, m, k;

    cin >> n >> m >> k;

    ll arr[n][k];

    for(ll i = 0; i<n; i++)
    {
      for(ll j = 0;j<k; j++)
      {
        cin >> arr[i][j];
      }

    }

		ll redundancy[k];

		for(ll i = 0; i<k;i++)
			redundancy[i] = 0;

	 	unordered_set<ll> sett;

		for(ll i = 0; i<n; i++)
		{

			for(ll j = 0; j<k; j++)
			{

				if(sett.count(arr[i][j]))
				{
					redundancy[j]++;
				}

				sett.insert(arr[i][j]);

			}

			sett.clear();

		}

		bool output = false;

    for(ll i = 0;i <n; i++)
    {

			output = false;

				for(ll j = i%k; j<k && !output; j++)
				{

					if(redundancy[j]>0)
					{
						continue;
					}

						cout << arr[i][j] << " ";

						if(redundancy[j]>0)
						redundancy[j]--;

						output = true;

				}

				if(!output)
					cout << arr[i][k-1] << " ";

		}

    cout << "\n";
	}
  return 0;
}
