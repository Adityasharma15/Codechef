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
		
    ll n, k;
    cin >> n >> k;
    
    unordered_map<ll, vector<ll>> map;
    
    ll temp;
    
    bool arr[n+1];
    
    memset(arr, false ,sizeof(arr));
    
    for(ll i = 0; i<n; i++)
    {
    	cin >> temp;
    	
    	if(arr[temp] == false)
    	{
    		map[temp].push_back(-1);
		}
		
		map[temp].push_back(i);
    	
    	arr[temp] = true;
	}

	ll diff = 0;
	
	ll x;
	
	for(auto i: map)
	{
		for( ll b = 0; b < (i.second.size() - 1); b++)
		{
			x = i.second[b+1] - i.second[b];
			
			x--;
			
			diff = max(diff, x);
		}
	}
	
	for(ll i = 1; i<=k; i++)
	{
		if(arr[i] == false)
		{
			diff = n;
			break;
		}
	}

	cout << diff << "\n";

	}

}
