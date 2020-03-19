#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int  n , m ,x , y , check = 0;
		cin >> n >> m>> x >> y;
		n--;
		m--; 
	    
		if(n==1 && m==1 && check==0)
		{
			
			cout << "Chefirnemo" << endl;
			check = 1;
		}
		
		if(n<x || m<y)
		{
			if(check==0)
			{
			cout << "Pofik" << endl;
			check=1;
	       	}
	    }
			
 		if(x==1 && check==0 && n>x)
 		{
 			if(m%y==1)
 			{
 			cout << "Chefirnemo" << endl;
			check = 1;
			 }
		}
 		
 		
 		if(y==1 && check==0  && m>y)
 		{
 			if(n%x==1)
 			{
 			cout << "Chefirnemo" << endl;
			check = 1;
			 }
		 }
		
		if(n%x==0 && m%y==0 && check ==0 )
		{
			cout << "Chefirnemo" << endl;
			check = 1;
		}
		
		
		if (n%x==1 && m%y==1  && check ==0)
		{
			cout << "Chefirnemo" << endl;
			check = 1;
		}
			
		if(check==0)
		cout << "Pofik" << endl;
	}
}
