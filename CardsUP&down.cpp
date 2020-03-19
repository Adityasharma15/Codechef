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
		ll int len = s.length();
		
		bool flag = true , flag1 = true;
		
		if(len==1)
		{
			if(s[0]=='0')
				flag1 = false;
			
			if(s[0]=='1')
				flag1 = true;
		}
			
		if(len>1)	
		{
	
		if(s[0]=='0')
		{
			if(s[1]=='0')
			{
				flag1 = false;
			}
		}
	}
		
		if(len>1)
		{
		for(int i=1;i<(len-1) ;i++)
		{			
			if(flag1==true)
			{		
			if(s[i]=='0')
			{
				flag = false;
				
				if(s[i-1]=='1' && s[i+1]!='1')
					flag = true;
				
				if(s[i+1]=='1' && s[i-1]!='1')
					flag = true;
					
				if(flag == false)
					flag1 = false;
			}
			
			
			if(s[i]=='1')
			{
				flag = true;
				
				if(s[i-1]=='1' && s[i+1]!='1')
					flag = false;
				
				if(s[i+1]=='1' && s[i-1]!='1')
					flag = false;
					
				if(flag == false)
					flag1 = false;
			}
		}
		}
		
			if(s[len]=='0')
				{
					if(s[len-1] == '0')
							flag1 = false;
				}	
	}
	
	if(flag1 == false)
		cout << "LOSE" << endl;
		
	if(flag1 == true)
		cout << "WIN" << endl;
}
}

