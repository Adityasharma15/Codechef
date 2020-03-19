#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll int t;
	cin >> t;
	while(t--)
	{
			
	ll int n, k;
	cin >> n >> k;
	
	n = n/k;
	
	if(n%k==0)
		cout << "NO" << endl;
		
	else 
		cout << "YES" << endl;
	
	}
	
}
