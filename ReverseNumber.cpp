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
		long long int x = n;
		
		while(x%10==0)
		{
			x=x/10;
		}
		
		while(x)
		{
			cout << x%10;
			x/=10;
		}
		
		cout << endl;
	}
}
