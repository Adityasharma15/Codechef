#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll t;
	cin >> t;
	
	while(t--)
	{
		ll n;
		cin >>n;
		
		ll k;
		cin >> k;
		
		string s;
		cin >> s;
		
		ll max = 0;
		
		ll count = 0;
		
		for(int i = 0; i<n-k;i++)
		{	
			
//			for(int j =0; j<k ; j++)
//			{
//				if(s[i]=='1')
//					{
//					count++;
//					}
//					
//				else if(s[i]=='0')
//					{
//					
//					if(max<count)
//						max = count;
//							
//					count = 0;
//					}
//			}
			
				if(s[i]=='1')
					count++;
					
				else if(s[i]=='0')
				{
					if(i>=k || n-i>=k)
						count = count+k;
					
					if(max<count)
						max = count;
							
					count = 0;
				}
			
			
		}
		
		
		cout << max << "\n";
		
	}
	
	
}
