#include<bits/stdc++.h>
#define ll long long
using namespace std;  

long long C(long long int n,long long int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    long long int i;

    for(i = 1; i <= r; i++) {
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
		
		ll int k , n;
		cin >> n >> k;
		
		if(k==n)
		cout << "1" << endl;
		
		if(k<n)
		{
		ll int arr[n];
	
		for(ll int i=0;i<n;i++)
			cin >> arr[i];
			
		sort(arr,arr+n);
		
		ll int repeats = 0;
		
		for(ll int i=k-2;i>=0;i--)
		{
			if(arr[k-1]==arr[i])
			repeats++;
		}
	
		ll int repeatswithin = repeats + 1;
		
		for(ll int i=k;i<n;i++)
		{
			if(arr[k-1]==arr[i])
			repeats++;
		}
		
		repeats++;
		
//	ll int C[repeats+1][repeatswithin+1] = {0};
//	
//	for(ll int i=0;i<=repeats;i++)
//	{
//		for(ll int j=0;j<=min(i,j);j++)
//		{
//			if(j==0|| j==i)
//				C[i][j]=1;
//				
//			else
//				C[i][j]=C[i-1][j-1] +C[i-1][j];	
//			
//		}
//	}
		
		cout << C(repeats,repeatswithin)<< endl;
		
		}
		
	}
}
