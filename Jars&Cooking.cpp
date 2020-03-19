#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n , max = -1, temp , sum = 1;
		cin >>n;
		int l = n;
		
		while(n--)
		{   
			cin >> temp;
			
			sum = sum + (temp-1);
			
			if(temp>=max)
			max = temp;
		}
		
		if(sum > max)
		max = sum;
		
			cout << max << endl;
	}
	
}
