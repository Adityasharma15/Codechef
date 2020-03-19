#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int m , n;
		cin >>  m >> n;
		
		long long int c = m*n , sum = 0 , temp;
		
		
		while(c!=0)
		{
			temp = c % 10;
			c/=10;
			
			sum+=temp;
		}
		
		cout << sum%3 << endl; 
		
		
		
	}
	
}
