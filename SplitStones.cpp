#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int a,b,c,x,y;
		cin >> a >> b >> c >> x >> y;
		
		int flag = 0 , check = 0;
		
		
		if(y<a && y<b && y<c)
  		{   
			flag = 1;
		}
		
		
		if(x<a && x<b && x<c)
		{
			flag = 1;
		} 
		
		
		else
		{
			if((x < a && x < b)|| (x<b && x<c) || (x<c && x<a)   )
			{
				if(x >= a)
				{
					if(y<b  && y<c)
					flag = 1;
				}
				
				if(x >= b)
				{
					if(y<a && y<c)
					flag = 1;
				}
				
				if(x >= c)
				{
					if(y<a && y<b)
					flag = 1;
				}
				
			}
		}
		
		
		
		if((a+b+c) != (x+y))
		{
			flag = 1;
		}
				
			
		if(flag==1)
		cout << "NO" << endl;
		
		if(flag==0)
		cout << "YES" << endl;
	}
	
}
