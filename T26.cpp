#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
	ll boxes;
	cin >> boxes;
	
	ll ar[boxes + 1]={0} , q[boxes + 1]={0};
	
	ll days;
	cin >> days;
	
	for(int j=0;j<days;j++)
	{	
		ll l , r;
		cin >> l >> r;
		
		for(ll i=l ; i<=r ; i++ )
		{   
		    if(ar[i] > 0 )
		    {
		      q[ar[i]]--;	
			}
			
			 ar[i]++;
	        	
	    	 q[ar[i]]++;
		}
	
	}
	
	ll ql;
	cin >> ql;
	
	while(ql--)
	{
		ll query , sum = 0 ;
		cin >> query;
		
		for(int i = query ; i < boxes + 1 ; i++  )
		{
		 sum+=q[i];	
	    }
	    
	    cout << sum << endl;
	}
}
