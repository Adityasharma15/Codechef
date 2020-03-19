#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		long long int p ,q;
		cin >> n;
		
		q = pow(10 , n);
		
		if(n%2==0)
		{
			p = pow(10 , n/2);
		}
		
		else
		{
			p = pow(10 , (n-1)/2);
		}
		
		int i=2;
		do{
			if(p%i==0 && q%i==0)
			{
				p/=i;
				q/=i;
			}
			
			else
			{
			i++;	
			}
		} while(i<=p);
		
		
		cout << p << " "<< q << endl;
		
		
	}
	
	
	
}
