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
	
	ll s, p, v, maxx = 0, x;
	
	while(n--)
	{
		cin >> s >> p >> v;
		
		s++;
		
		if(s%p!=0)
			x = floor(p/s);
		
		else x = p/s;			
				
		maxx = max(maxx, (x*v));		
				
	}		
    
		cout << maxx << endl;

	}
}

