#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	
	while(t--)
	{
		long long int a , b, c;
		cin >> a >> b >> c;
		
		if(((a+b)/c) % 2 ==0 )
		cout << "CHEF" << endl;
		
		else
		cout << "COOK" << endl;
		
		
	}
}
