#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll int t;
	cin >> t;
	
	while(t--)
	{
		
	ll int n ,x = 0 ,y;
	cin >> n;
	
	ll int goal[n],foul[n];
	
	for(int i=0;i<n;i++)
		cin >> goal[i];
		
	for(int i=0;i<n;i++)
		cin >> foul[i];
		
	for(int i=0;i<n;i++)
	{
		y = (goal[i]*20)  - (foul[i]*10);
		
		if(y>x)
		x=y;
	}
	
	cout << x << endl;
		
	}
}
