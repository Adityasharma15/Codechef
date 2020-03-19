#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		
		int l, r,count=0,temp;
		cin >> l >> r;
		for(int i=l;i<=r;i++)
		{  
		    temp=i%10;
		
			if(temp==3 || temp ==2 || temp==9)
			count++;
		}
		
		cout<<count<<endl;
	}
	
}
