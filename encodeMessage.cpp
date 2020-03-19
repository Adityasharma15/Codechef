#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--n)
	{
		int len;
		cin >> len;
		
		string s;
		cin >> s;
    
		
		if(len%2==0)
		{
		for(int i=0;i<len-1 ; i=i+2)
		{
			char t;
			t=s[i];
			s[i]=s[i+1];
			s[i+1]=t;
		}
		}
		
		if(len%2!=0)
		{
			
			for(int i=0;i<len-2 ; i=i+2)
		{
			char t;
			t=s[i];
			s[i]=s[i+1];
			s[i+1]=t;
		}
		}
		
		
		for(int i=0;i<len;i++)
		{
			
			s[i]= 122 - s[i] + 97;
			
		}
		
		
		cout << s << endl;
		
		
		
		
	}
	
	
	
}
