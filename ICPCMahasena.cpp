#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n;
	cin >> n;
	
	ll even = 0 , odd = 0;

	ll x;

	for(int i = 0; i<n;i++)
	{ 

		cin >> x;

		if(x%2==0)
			even++;
		else
			odd++;

	}

		if(even > odd)
			cout << "READY FOR BATTLE" << "\n";

		else
			cout << "NOT READY" << "\n";

}