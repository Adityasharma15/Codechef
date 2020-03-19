#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll t;
	cin >> t;
	
	while(t--)
	{
	
	string s = " . . . ";
	
	ll n;
	cin >> n;
	ll arr[1002];
	memset(arr , 0 , sizeof(arr));
	
	ll x;
	
	ll max = -1;
	
	for(ll i =0; i<n;i++)
	{
		cin >> x;
		arr[x]++;
		
		if(x>max)
			max = x;
	}
	
	ll count  = 0 , low = 0, high = 0;
	
	
	for(ll i = 1 ; i<=max+1; i++)
	{
		if(arr[i]>=1)
		{
			if(count==0)
				low = i;
		
		 	count++;			
		 	
		 	//cout << " i & count  " << i << " "<< count << endl;
		}
		
		else if(arr[i]==0)
		{
			
			//cout << "*2 " << count <<endl;
			
			//high = i-1;
					
			if(count>2  && i-1>=low)
				{
					cout << low << s << i-1 << ",";
				}
					
			else if(count<=2 && i-1>0 && low>0  && i-1>=low)
			{
				
			if(count==2)
				{
				
				cout << low << "," << i-1;
					    
				if(i-1<max)
					cout << ",";
				}		
					
				if(count!=2)
				{
				cout << low << ",";
					
				if(low<max)
					cout << ",";
					
				}
			}
			
			count = 0;		
		}
		
	}
		cout << "\n";
	
	}
}
