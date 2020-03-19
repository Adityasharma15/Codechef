#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int len , m;
		cin >> len >> m;
		
		int ar[len] , count=0;
		
		for(int i=0;i<len;i++)
		{
			cin >> ar[i];
			
			if(ar[i]%m==0)
			count++;
		}
		
		int ans = pow(2,count) - 1;
		cout << ans << endl;
		
		
		
		
		
	}
	
	
	
}
