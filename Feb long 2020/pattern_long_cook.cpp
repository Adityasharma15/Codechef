#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll day(ll d, ll m, ll y) 
{ 
	static ll toto[] = { 0, 3, 2, 5, 0, 3, 
					5, 1, 4, 6, 2, 4 }; 
	
	y -= m < 3; 
	
	return ( y + y / 4 - y / 100 + 
			y / 400 + toto[m - 1] + d) % 7; 
} 

bool leap(ll y)
{
	if(y%400 == 0)
		return true;
		
	if(y%100 == 0)
		return false;
		
	if(y%4==0)
		return true;
		
	return false;
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);

	ll t;

	while(t--)
	{
		ll a, b, n , m;
		
		ll temp;
		
		ll q;
		
		ll prev = 1800;
		
		for(ll i=1800; i<=2020; i++)
		{
			temp = day(1, 2, i);
			
			if(temp == 6)
				{
				   	q = i - prev;
					     
					
					cout << i  << endl;
					prev = i;
					
				}	
			
			else if(temp == 0)
				{
					q = i - prev;
					//cout << i << " " << q << endl;
					prev = i;
					
					//if(leap(i))
						cout << i << endl;	
				}

 	}                   
}
}
