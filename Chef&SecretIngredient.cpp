#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n, arr[28]={0} , count = 0;
		cin >> n;
		for(int j=0;j<n;j++)
		{
			string s;
			cin >> s;
			
			long long int check[28]={0};
			
			for(int i=0;i<s.length();i++)
			{
				if(check[s[i]-97]==0)
				{
				arr[s[i]-97]++;
				check[s[i]-97]++;
			    }
			}	
		}
		
	for(int i=0;i<28;i++)
		{
			if(arr[i]>=n)
			{
			//cout << "*" << i<< endl;
			count++;
			}
		}
		
		cout << count << endl;   
	}
}
