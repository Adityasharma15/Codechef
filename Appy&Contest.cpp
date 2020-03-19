#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	
	while(t--)
	{
		long long int n , a , b , k , count =0;
		cin >> n >> a >> b >> k;
		
		long long int gcd = __gcd(a,b) , lcm = lcm(a,b);
		
		// later take care of 1
		
		if(gcd==1)
		{
			count = (n/a) +(n/b) - 2*((n)/(a*b));
		}
		if(gcd!=1)
			count = (n/a) + (n/b) - 2*(n/lcm);
		
		cout << "*" << count << endl;
		
	    if(count >= k)
	    cout << "Win" << endl;
	    
	    else
	    cout << "Lose" << endl;
	}
	
	
	
}
