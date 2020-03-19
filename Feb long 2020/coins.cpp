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
		
		ll n, p; 
		cin >> n >> p;
		
		ll x;
		
		bool flag = false;
		
		ll arr[n];
		
		ll abc[n];
		
		for(ll i = 0; i<n; i++)
			cin >> abc[i];
		
		memset(arr, 0 , sizeof(arr));
		
		for( ll i = n-1; i>=0; i--)
		{
			x = abc[i]; 
			
			if(x!=1)
			{
				if(p%x!=0)
				{
				flag = true;
				ll a = p/x;
				arr[i] = (a+1);
				break;
				}
				
				else 
				{	
				ll z = p/x;
				if(z>1)
				{
					p-=(x*(z-1));
					arr[i] = (z-1);
				}
				}
			}
			
		}
		
		if(!flag)
			cout << "NO" << "\n"; 
		
		else
		{
			cout << "YES";
			
			for(ll i = 0; i<n; i++)
				cout << " " << arr[i];
			
			cout << "\n";
		}
		
	}

}
