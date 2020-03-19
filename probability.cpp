#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		float len;
		int a , b;
		cin >> len >> a >> b;
		int counta =0 , countb =0;
		
		for(int i=0 ; i<len ; i++)
		{
			float x;
		   cin >> x;
		   
		   if(x==a)
		   counta++;
		   
		   if(x==b)
		   countb++;
		}
		
		float prob = (counta*countb)/(len*len)	;
		
		cout << fixed << setprecision(10)  << prob << endl; 
	}
	
	
}
