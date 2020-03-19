#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n , k , x;
		cin >> n >> k; 	
		
		while(n--)
		{
			cin >> x;
			
			if(x>k)
			cout << "0";
			
			else if(x<=k)
			{
				k=k-x;
				cout << "1";
			}
		}
			
		cout << endl;	
	}
	
}
