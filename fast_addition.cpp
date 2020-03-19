#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll bin(ll n) 
{ 
    ll x = 0; 
	ll de = 0; 
    ll num = n;
	
    ll b = 1; 
	ll t = num; 
	
	while (t) 
    { 
		ll last=t%10; 
		t=t/10; 

		de+=last*b; 

		b=b*2; 
	} 
	
	return de; 
}

ll fast_addition(ll a, ll b)
{
    ll count = 0, u, v;
    while(b>0)
    {
        u = a^b;
        v = a&b;
        a = u;
        b = v*2;
        count++;
	}

    return count;
}


int main()
{
    ll t;
    cin >> t;

	while(t--)
	{
    string A, B;

    cin >> A >> B;

	stringstream g(A); 
    ll a = 0; 
    g >> a; 
    
	stringstream g1(B); 
    ll b = 0; 
    g1 >> b; 

    a = bin(a);
    b = bin(b);
					
    cout << fast_addition(a,b) << "\n";
    
    
	}
}
