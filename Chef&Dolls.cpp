#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int n ,x ,i;
	cin >> t;
	while(t--)
	{
		cin >> n;
		
		long long int arr[100000] = {0};
		
		for(i=0 ; i<n ; i++)
		{
			cin >> x;
			arr[x]++;
		}
		
		for(i=0 ; i<100000 ; i++)
		{
			if(arr[i]!=0)
			{
			if(arr[i]%2==1)
			{
				cout << i << endl;
			}
		    }
		}
		
	}
}
