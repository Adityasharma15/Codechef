	#include<bits/stdc++.h>
	#define ll long long
	using namespace std;


	long long int power(long long int x, long long int y)
	
	{

		ll e = y;	

		ll b = x;
		ll ans = 1;
		
		for(ll i = 1; i <= e; i++)
		{
			
			ans *= b;
		}
		return ans;
	}

	
	int main()
	{
		ll t;
		cin >> t;
	
		while(t--)
		{
			ll a, b, d, n, verdict;
	
			cin >> n;

			cin >> a;
	
			cout << 2*(power(10,n)) + a;
			cout << endl;
	
			cin >> b;
	
		  	cout << (power(10, n)) - b;
		  	cout << endl;
	
		  	cin >> d;
		  	
			cout << (power(10,n)) - d;
			cout << endl;
	
			cin >> verdict;
	
			if(verdict == -1)
				exit(0);
	
		}
	}
	
	