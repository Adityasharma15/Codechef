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
		
		int len = s.length();
		
		int check = 0 , ans = 0 , occ1=0;
		
		for(unsigned int i=0; i<len; i++)
		{
			if(s[i]=='1')
			{
				if(check==1)
				ans=1;
				
				if( i < len+1 &&  s[i+1]=='0')
					check=1;		
					
				occ1=1;	
			}
		}
		
	      if(ans==0 && occ1==0 )
	      cout << "NO" << endl;
		  
		  	
		    if(ans==1)
			cout << "NO" << endl;
			
			if(ans==0 && occ1==1)
			cout << "YES" << endl;
	}
	
}
