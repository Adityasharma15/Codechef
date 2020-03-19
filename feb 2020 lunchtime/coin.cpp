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
    
    ll arr[n];
    
    ll ans = 0;
    
    char c;
    
    for(ll i = 0; i<n; i++)
    {
    	cin >> c;
    	
    	if(c == 'H')
    		arr[i] = 1;
    		
    	else
    		arr[i] = 0;
    		
    		
    	if(i<(n-k))
    	{
    		if(arr[i])
				ans++;
		}
			
	}

    bool flag = 0;
    
    ll flips = 0;
    
    for(ll i = n - 1; i>= (n-k) ; i--)
    {
    	if(flag)
    	{
    		if(arr[i] == 0)
    		{
    			flips++;
    			flag = false;
			}
		}
    	
    	else
    	{
    		if(arr[i] == 1)
    		{	
				flips++;
				flag = true;
			}
		}
    
	}
	
	if(flips%2==0)
		cout << ans << "\n";
    
    else
    	cout << ( (n-k) - ans) << "\n";
    
	}

}
