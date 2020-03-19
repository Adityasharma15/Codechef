#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;
		
		int check = 0;
		
		long long int a[n] ={0}, b[n+1] = {0} , c[n+1]={0};
		
		
		for(int i=0; i < n ; i++)
		{
			cin >> a[i];
		}
		
		for(int i=0;i<n;i++)
	    {
	    	
	    if(c[a[i]]<1)	
		b[a[a[i]-1]]++;
		
		c[a[i]]++;
		}
		
		for(int i=0;i<=n;i++)
		{
			if(b[i]>=2)
			check = 1;
		}
		
		if(check==1)
		cout << "Truly Happy" << endl;
		
		else if ( check == 0)
		cout << "Poor Chef" << endl;
}

}
