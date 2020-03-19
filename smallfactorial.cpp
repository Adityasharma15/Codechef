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
		long long int fac = 1;
		
		while(n>0)
		{
			fac = fac*n;
			n--;
		}
		
		cout << fac << endl;
	}
	
}
