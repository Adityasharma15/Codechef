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
		
		if(n%2==0)
		cout << 1 << " "<< pow(10, n/2) << endl;
		
		else
		cout << 1 << " "<< pow(10, (n+1)/2) << endl;
	}
	
	
	
}
