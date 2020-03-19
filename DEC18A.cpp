#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, t,x;
	cin >> n >> t;
	
	while(n--)
	{
		cin >> x;
		
		if(x<t)
		cout <<  "Bad boi" << endl;
		
		else
		cout << "Good boi" << endl;
	}
	
}
