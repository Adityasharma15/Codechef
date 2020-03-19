#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		
		long long int arr[29] = {0}, length = s.length(), arraylength, minchange = 1000000 , factors[length+1];
		
		long long int divisor;
		
		
		//Organising Characters as array.
		for(int i=1;i<length;i++)
		{
			//Should have been 65.
			arr[s[i]-64]++;
		}
		
		sort(arr, arr + 28);
		
		
		// FInding upto which array is non-zero..
		//unimportant..
		for(int i=1;i<length;i++)
		{
			if(arr[i]==0)
			{
			arraylength = i;
			}
		}
		
		//Finding Factors...
		for(int i=1;i<=length;i++)
		{
			if(length%i==0)
			{
				divisor = length/i;	
				factors[i] = divisor;
				//cout << "*" << i << " " << divisor << endl;							
			}
		}
		
		
		// Finding Absolute Difference
		long long int diff = 0;
		
		for(int i=1;i<=length;i++)
		{
			for(int j=1;j<28;j++)
			{ 
				
					
			}
		}
		
	}	
		}
	
	

