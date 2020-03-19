#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	
	while(t--)
	{
		long long int n , k;
		cin >> n >> k;
		
		long long int arr[n];
		
		for(int i=0; i<n;i++)
		{
			cin >> arr[i];
		}
		
		long long int girls = 0 , sum = 0 , max =0 , j;
		
	    for(int i=0; i < n - k + 1 ; i++ )
	    {
	    	sum = 0;
	    	j = i;
	    	
	    	for(int x = 0 ; x < k; x++)
	    	{
	    		sum+=arr[j];
	    		j++;
			}
			
			if(sum > max)
			max = sum;
		}
		
		cout << max << endl;
	}
}
