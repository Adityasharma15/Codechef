#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		
		int len , check = 0;
		
		cin >> len;
		
		long long int ar[len];
		
		
		for(int i =0;i<len;i++)
		{
			 cin >> ar[i];
		}
		
		
		for(int z = 0 ; z < len;z++)
		{
		  
		  if(ar[z]==1 && check==0)
		  {
		  	cout << "YES" << endl;
			  check=1;		  
		  }
		  
		  if(check==0)
		{
			
		for(int j = 0; j < len; j++)
		{
			if(z!=j && check==0)
           	{
									
			int x = __gcd(ar[z],ar[j]);
			 
			if(x==1)
			{
				cout << "YES" << endl;
				check=1;
       		}
       		  }
		}		
		}		
		}
		
		if(check==0)
		cout << "NO" << endl;
		
	   }
}
