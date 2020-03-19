#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	
	while(t--)
	{
		long long int n , flag =0, end = 0 , day = 0, temp;
		cin >> n;
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		while(flag==0)
		{
		if (end>=n)
        {
		cout << day << endl;
		flag = 1;
	    }
	    
	    temp = end;
	    
		for(int i = 0; i<=end; i++)
		{
			if(flag==0)
			{
			temp+=arr[i];	
			if((arr[i+1] + end )>= n  && flag==0  )
		    {
		    if((i+1) > end)	
			day++;
			
			cout << day;
			flag = 1;
	    }
			}
	}  day++;
			
	}
	}
	
}
