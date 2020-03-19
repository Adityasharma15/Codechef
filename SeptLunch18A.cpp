#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	
	while(t--)
	{
	
	long long int n , s , j , count = 0;
	cin >> n;
	
	while(n--)
	{
		cin >> s >> j;
		
		if (j-s>5)
		count++;
	}
	
	cout << count << endl;
	
    }
}
