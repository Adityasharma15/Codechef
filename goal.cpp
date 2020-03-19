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
		
		string s;
		cin >> s;
		
		ll a = 0, b = 0;
		ll t1, t2, ii;
		
		bool flag = false;
		
		for(ll i = 0; i<n; i++)
		{
			if(i%2==0 && s[i] == '1')
				a++;
				
			else if(i%2==0 && s[i] == '1')
				b++;
			
			
			if(a>b)
			{
				t1 =(a-b);	
				
				t2 = (2*n - (i+1))/2;
				
				
				
				if(t1>t2)
				{
				
				if(i%2==0)	
				{
					t2++;
					
					if(t1>t2)
					{
						flag = true;
						cout << i+1 << "\n";			
					}		
				}
				
				else	
				{				
				flag = true;
				cout << i+1 << "\n";
				}
				}
				
				
			}
				
				
			else
			{
				
				t1 =(b-a);	
				
				t2 = (2*n - (i+1))/2;
				
				
				if(t1>t2)
				{
				
				if(i%2==0)	
				{
					t2++;
					
					if(t1>t2)
					{
						flag = true;
						cout << i+1 << "\n";			
					}		
				}
				
				else	
				{				
				flag = true;
				cout << i+1 << "\n";
				}
				}
				
			}	
				
		}	
    
		if(flag==false)
			cout << 2*n << "\n";

	}

}
