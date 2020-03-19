#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;
		
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		
		sort(arr , arr + n);
		
		long long int dif = 0 , least = 1000000;
		
		for(int i=0;i<n-1;i++)
		{
			dif = arr[i+1]-arr[i];
			
			if(dif < least)
			least = dif;
		}
		
		cout << least << endl;
	}
}
