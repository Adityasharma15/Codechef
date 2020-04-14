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

     for(ll i = 0;i<n; i++)
       cin >> arr[i];

     ll start = 0, end = 0, ans = 0, temp, mult=1;

     ll lastEven = -1;

     vector<ll> even;

     for(ll i = 0;i<n; i++)
     {
        end = i;

        if(arr[i]%2!=0 || arr[i]%4==0 || arr[i]==0)
        {
             ans +=(start - end) + 1;

             if(arr[i]%2==0)
              even.push_back(i);

             continue;
        }

        if(arr[i]%2==0)
            even.push_back(i);

        start = i;
     }

     ll dif;

     for(ll i = 0; i<(even.size()+1); i++)
     {
        dif+= (even[i+1] - even[i]);
        ans+= dif;
     }

     cout << ans << "\n";

	}

  return 0;
}
