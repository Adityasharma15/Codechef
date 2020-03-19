#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main()
{
	ll int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
	
		ll arr[n];
		
		for(ll i = 0; i<n; i++)
			cin >> arr[i];
		
		ll count = 1;
			
		for(ll i = 1 ; i<n; i++)
		{
			int flag = 0;
			
			for(int j = i-1; j>= i-5; j--)
			{	
			
				if(j<0)
				break;			
			
				if(arr[j] <= arr[i])
				 {	
				 flag = 1;
				 break;
			    }				
		    }
					
			if(flag==0)
				count++;
						
		}
				
		cout << count << endl;
	}
}
