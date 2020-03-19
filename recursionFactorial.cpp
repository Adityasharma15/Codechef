#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll factorial(ll x)
{
 ll ans = 1;
	
	if(x>1)
	{
		
		ans = x*factorial(x-1);
		return ans;	
	}
	
	if(x<=1)
	{
		return 1;
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	
	ll f;
	cin >> f;
	cout << factorial(f) << endl;
}
	
}
