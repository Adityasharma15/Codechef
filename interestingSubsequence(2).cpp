#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long C(long long int n,long long int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    long long int i;

    for(ll i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}  


int main()
{
	ll int t;
	cin >> t;
	
	while(t--)
	{
		ll int n, k;
		cin >> n >> k;
		
		ll int arr[n];
		
		for(ll int i =0;i<n;i++)
			cin >> arr[i];
			
		ll int r=0,r1=0;
		
		sort(arr,arr+n);
		
		for(ll int i=0;i<n;i++)
		{
			if(arr[k-1]==arr[i])
			{
				r++;
				
				if(i<k)
				r1++;		
			}
		}
    
		cout << C(r,r1) << endl;
	}
	
}
