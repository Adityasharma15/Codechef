#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t;
	cin >> t;
	while(t--)
	{
		long long int n , x ,s , ptr , t1 , t2;
		cin >> n;
		cin >> x;
		cin >> s;
		ptr = x;
		
		while(s--)
		{
			cin >> t1 >> t2;
			if(t1==ptr)
			{
				ptr = t2;
			}
			
			else if(t2==ptr)
			{
				ptr = t1;
			}
		}
		
		cout << ptr << endl;
		
		
	
		
		
		
	}
	
}
