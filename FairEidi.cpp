#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll int t;
	cin >> t;
	
	while(t--)
	{
		ll int a,b,c,x,y,z;
		cin>>a>>b>>c>>x>>y>>z;
		
		ll int flag = 0;
		
		if(a>=b)
		{
			if(x<y)
			flag = 1;	
		}
		
		if(a==b)
		{
			if(x!=y)
			flag=1;
		}
		
		if(b==c)
		{
			if(y!=z)
			flag=1;
		}
		
		if(c==a)
		{
			if(z!=x)
			flag=1;
		}
		
		else if(b>=a) 
		{
			if(x>y)
			flag = 1;
		}
		
		
		if(b>=c)
		{
			if(z>y)
			flag = 1;
		}
		
		else if(c>=b)
		{
			if(y>z)
			flag =1;
		}
		
		if(c>=a)
		{
			if(x>z)
			flag = 1;
		}
		
		else if(a>=c)
		{
			if(z>x)
			flag = 1;
		}
		
		
		if(a!=b)
		{
			if(x==y)
			flag = 1;
		}
		
		if(b!=c)
		{
			if(y==z)
			flag = 1;
		}
		
		if(c!=a)
		{
			if(x==z)
			flag=1;
		}
	
				
		if(flag==1)
			cout << "NOT FAIR" << endl;
			
		if(flag==0)
			cout << "FAIR" << endl;	
		}
}
