#include<bits/stdc++.h>	
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;	
		cin >> s;
		
		int check = 0;
		
		
		for(unsigned int i=0; i<s.length() ;  i++)
		{
			if(i<(s.length() - 1)  && check!=1)
		{
			if(s[i]==s[i+1])
			{
				cout << "NO" << endl;
			    check = 1;
	     	}
		}
			
			if(s[i]!=s[0] && s[i]!=s[1] && check!=1)
			{
				cout << "NO" << endl;
				check = 1;
			}
		
			
		}
		
		if(check==0)
		cout << "YES" << endl;
		
	}
}
