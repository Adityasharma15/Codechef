#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	//ios_base::sync_with_stdio(0);
    //cin.tie(0);
	//cout.tie(0);
	
	ll t;
	cin >> t;
	
	while(t--)
	{
		ll n;
		cin >> n;
		
		ll arr[n];
		
		for(ll i =0; i<n;i++)	
		{
			cin >> arr[i];
			
		}
			
		sort(arr, arr + (sizeof(arr)/(sizeof(arr[0]))));
		
		cout << arr[0] << "\n";	
		
		
	}
	
	
}
