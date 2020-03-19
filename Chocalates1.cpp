#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(a!=b)
		{
			int mn=a,mx=b;
			while(mn!=mx && mn>0 && mx>0)
			{
				mn=min(mx,mn);
				mx=max(mx,mn);
				mx=mx-mn;
			}	
			cout<<mx<<"   "<<mn<<"   "<< mx+mn << endl;
		}
		else{
			cout<<"a"<<endl;
		}
	}
	return 0;
}
