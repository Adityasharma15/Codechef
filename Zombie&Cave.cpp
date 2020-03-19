#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll int t;
	cin >> t;
	
	while(t--)
	{
		ll int n;
		cin >> n;
		
		int flag = 0;
		
		ll int c[n+1] , h[n+1] , a[n+1];
		
		fill_n(a, n+1 , 0);
		h[0]=0;
		
		ll int x , y;
		
		for(int i=1;i<n+1;i++)
			cin>> c[i];		
		
		for(int i=1;i<n+1;i++)
			cin >> h[i];
		
		for(int i=1;i<n+1;i++)
		{
			x = i - c[i];
			y = i + c[i];
			
			if(x<=1)	
				a[1]+=1;
			
			if(x>1  && x<=n+1 )
				a[x] += 1;
				
			if(y>1 && y<n)
				a[y+1]-=1;
				
			if(y>n && x<n)
				a[n+1]-=1;
				
				
		}
		
		for(int i=1;i<n;i++)
		{
			a[i+1]=a[i+1] + a[i];
		}
		
		sort(a,a+n+1);
		sort(h,h+n+1);
		
		
		for(int i=1;i<n;i++)
		{
			if(a[i]!=h[i])
				flag = 1;
		}
		
//		
//		cout << "Arr " << endl;
//		for(int i=1;i<n+1;i++)
//		{
//			cout << a[i] << " " ;		
//		}
//		
//		cout << endl;
		
		if(flag==0)
			cout << "YES" << endl;
		
		if(flag==1)
			cout << "NO"<<endl;
	}	
	
}
