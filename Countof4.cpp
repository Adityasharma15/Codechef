#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int num;
		cin >> num;
		
		long long int temp , count =0;
		while(num!=0)
		{
			temp = num%10;
			num/=10;
			
			if(temp==4)
			count++;
			
		}
		
		cout << count << endl;
		
	}
	
	
}
