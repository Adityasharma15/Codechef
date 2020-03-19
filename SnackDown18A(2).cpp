#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	
	while(t--)
	{
		long long int n, k, count = 0;
		cin >> n >> k;
		
		long long int arr[n];
		
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		
		sort(arr , arr + n);
		
		for(int i=0; i<n;i++)
		{
			if(arr[i] >= arr[n-k])
			count++;
		}
		
		cout << count << endl;
	}
	
	
}
