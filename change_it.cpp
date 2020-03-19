#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll t;
    cin >> t;


    while(t--)
    {
    	ll n;
    	cin >> n;

		ll arr[101];

		memset(arr, 0, sizeof(arr));	

		ll x;

  		for(ll i = 0 ; i < n; i++)
  		{
  			cin >> x;
  			arr[x]++;
  		}

  		sort(arr, arr + sizeof(arr)/sizeof(arr[0]));

  		cout <<  (n - arr[100]) << "\n";  

    }
}