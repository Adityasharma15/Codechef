#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll int t;
	cin >> t;
	
	while(t--)
	{
		string s;
		cin >> s;
		
		ll int len = s.length() , flag = 0;
				
		if(len==1)
		{
			if(s[0]=='0')
				flag = 1;	}
		
		if(len>1)
		{
			
		for(int i=0;i<len;i++)
		{
			if(s[i]=='1')
			{
				
				s[i]='2';
				
				if(i<len-1)
				{
				if(s[i+1]=='1')
					s[i+1]='0';
				
				else if(s[i+1] == '0' ) 
					s[i+1]='1';
				}
					
				if(i>0)
				{
			    	 if(s[i-1]=='1')
						s[i-1]='0';
					
				   	else if(s[i-1] == '0' )
						s[i-1]='1';
				}
				
				if(i>0)
					i=i-2;
			}
		}
}
	
		for(int i=0;i<len;i++)
		{
			if(s[i]!='2')
				flag = 1;
		}

		if(flag == 1)
			cout << "LOSE" << endl;
			
		if(flag == 0)
			cout << "WIN" << endl;
	}
}
