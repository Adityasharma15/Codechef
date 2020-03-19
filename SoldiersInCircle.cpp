#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	
	while(t--)
	{
		long long int n, flag = -1 , maxflag = -1;
		cin >> n;
		
		long long int a[n], d[n];
		
		for(int i=0;i<n;i++)
			cin >> a[i];
		
		for(int i=0;i<n;i++)
			cin >> d[i];
			
		for(int i=0;i<(n-2);i++)
		{
			if((a[i]+a[i+2])<d[i+1])
				flag = d[i+1];	
				
			if(flag>maxflag)
				maxflag = flag;

		}	
		
		if((a[n-2] + a[0])< d[n-1])
			{
			flag = d[n-1];
			
			if(flag>maxflag)
				maxflag = flag;	
			} 
			
		if((a[n-1] + a[1]) < d[0] )
			
		{
		flag = d[0];	
		
		if(flag>maxflag)
			maxflag = flag;
		}
		cout << maxflag << endl;
	}
 }
