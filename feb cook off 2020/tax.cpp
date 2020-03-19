#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);


	ll t;
	cin >> t;

	while(t--)
	{
		ll n;
		cin >> n;
		
		ll temp;
	
		
		if(n<= 250000)
    	{
    		cout << n << "\n";
		}
		
		if( n >= 250001)
		{
			n-=((5*n)/100);
		}
		
		if( n>= 500001 && n>0)
		{
			n -= (n/10);
		}
		
		if( n>= 750001 && n>=0)
		{
			n  -= ((15*n)/100);
		}
		
		if( n>= 1000001 && n>=0)
		{
			n-=((2*n)/10);
    		
		}
		
		if( n>= 1250001 && n>=0)
		{
			n-=((25*n)/100);
    		
		}
		
		if( n > 1500000 && n>=0)
		{
			n-=((3*n)/10);
		}
		
		
		
		cout << n << "\n";
		
		
		
		
	}

}
