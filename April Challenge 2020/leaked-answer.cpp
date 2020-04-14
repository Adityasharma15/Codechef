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

    for(ll i = 0;i <n; i++)
    {
          cout << arr[i][i%k] << " ";
    }

    cout << "\n";

	}

  return 0;

}
