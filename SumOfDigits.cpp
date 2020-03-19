#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, t, x ;
	cin >> t;
	while(t--)
	{
		long long int sum = 0;
		cin >> n;
		x = n;
		while(x)
		{
			sum+=x%10;
			x=x/10;
		}
		
		cout << sum << endl;
	}
	
}
