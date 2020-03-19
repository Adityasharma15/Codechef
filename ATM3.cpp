#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;

		cout << "1" << " ";
		cout << "1";
	
	
		
		if(n%2==0)
		{
		
		for(int i =0 ; i<n/2; i++)
		{
			cout << "0";
		 } 
		
		
		
	}
	
	if(n%2!=0)
	{
		for(int i =0 ; i<(n-1)/2; i++)
		{
			cout << "0";
		}
	}
	
	cout << endl;
	}
}
