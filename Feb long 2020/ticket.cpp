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

	ll pro = 0;

	while(t--)
	{
		ll n;
		cin >> n;
		
		ll show[4][4];
		
		memset(show, 0, sizeof(show)); 
		
		char a;
		 
		ll b, t1, t2, maxx = 0, maxa, maxb;
		
		while(n--)
		{
			cin >>  a >> b;
			
			t1 = a - 'A';
			t2 = (b/3) - 1;
			
			if(t1>=0 && t1<4 && t2>=0 && t2<4)
			{						
			
			show[t1][t2]++;
			
			if(maxx < show[t1][t2])
				{
					maxa = t1;
					maxb = t2;
				}
			
			maxx = max(show[t1][t2], maxx);
			
			}
		}
    	
    	ll flag = 0;
    	
    	ll profit = 0;
    	
    	for(ll i = 0; i<4; i++)
    	{
    		flag = 0;
    		
    		for(ll j = 0; j<4; j++)
			{
				if(show[j][i] == 0)
					flag++;
			}    		
			
			if(flag == 4)
				profit-=100;
		}

		if(profit!=400 && maxx!=0)
			profit += 100*maxx;

		ll maxi = 0;

		vector<ll> v;

		for(ll i = 0; i<4; i++)
		{
			if(i==maxb)
				continue;
			
			maxi = 0;
			
			for(ll j = 0; j<4; j++)
			{
				if( j==maxa)
					continue;
				
				maxi = max(maxi, show[j][i]);
			}
			
			v.push_back(maxi);
						
//			profit += mult*maxi;
//			
//			mult-=25;
		}

		sort(v.begin(), v.end(), greater<int>());
		
		ll mult = 75;
		
		for(ll i = 0; i<v.size(); i++)
		{
			profit+= mult*v[i];
			mult-=25;
		}
		
		cout << profit << "\n";
		
		pro += profit;
	}
		
	cout << pro << "\n";	
}
