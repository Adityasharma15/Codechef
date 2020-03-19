#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n , q , k;
	cin >> n >> q >> k;
	
	int arr[n];
	
	for(long long int i=0;i<n;i++)
		cin >>arr[i];
	
	string s;
	cin >> s;
	
	for(long long int i = 0; i < q; i++)
	{
		if(s[i]=='!')
		{
			int temp = arr[n-1];

			for(int i=n-1 ; i>=0; i--)
				arr[i]=arr[i-1];
				
			arr[0]=temp;

		}
		
		else if(s[i]=='?')
		{
			long long int count = 0 , max = 0;
			
			for(int i=0; i < n; i++ ) 
			{
				if(arr[i]==1)
				count++;
				
				if(count > max && count <= k)
				max = count;
				
				if(count > k)
				count = 0;
				
				if(arr[i]==0)
				count = 0;
			}
			
			cout << max << endl;
		}
		
		
	}
	
		
}
