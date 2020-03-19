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
	cin >> t;

	while(t--)
	{
		ll a, b, n , m;
		
		cin >> a >> b >> n >> m;
		
		ll s1 = b+1, e = m;
		
		if(a<=2)
    		s1 = b;
		
		if(n<2)
			e = (m-1);

		ll count = 0, temp;		
		
		ll csat = 0, csun = 0, clsun = 0, clfri = 0, clsat = 0;
		
		
		ll firstday = day(1, 2, s1);
		
		ll t1 = s1 + 6 - firstday;
		ll t2 = t2 - t1;
		
		
		ll i = s1;
		
		while(i<=e)
		{
			temp = day(1, 2, i);
			
			if(temp == 6)
			{
				count++;
			}
				
			else if(temp == 0 && leap(i) == false)
			{
					count++;
					i+=4;
			}
				
			i++;	
		}

		cout << count << "\n";

	}

}
