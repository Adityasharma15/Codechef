#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll t;
	cin >> t;
	
	while(t--)
	{
	
	string s = "...";
	
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
			
			high = i-1;
					
			if(count>2  && high>=low)
			{
					cout << low << s << high;
					
					if(high<max)
						cout << ",";
			}
					
			else if(count<=2 && high>0 && low>0  && high>=low)
			{
				
			if(count==2)
			{
				
				cout << low << "," << high;
					    
				if(high<max)
					cout << ",";
			}		
					
			else 
			{
			cout << low;
					
			if(low<max)
				cout << ",";
					
			}
			}
			
			count = 0;
			low = -1;
			high = -1;		
		}
		
	}
		cout << "\n";
	
	}
}
