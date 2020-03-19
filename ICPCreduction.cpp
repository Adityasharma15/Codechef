#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll int t;
	cin >> t;

	while(t--)
	{
		ll int n , k;
		cin >> n >> k;

		ll arr[n];

		for(ll i =0; i<n;i++)
			cin >> arr[i];


		sort(arr, arr + n);

		ll sumf = 0;

		ll sum = 0;

		for(ll i = 0 ; i < n-2; i++)
		{
			if(arr[i] > k)
				sum += (arr[i]-k);

			if(arr[i] <=k)
				sumf+=arr[i];
		} 

		if(sum%2==0)
			sumf += arr[n-1];

		else
			sumf += arr[n-1] -1;

		if(n=1)
			cout << n << "\n";

		else
			cout << sum << "\n";


		

	}
}