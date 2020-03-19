#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int len, k;
		cin >> len >> k;
		vector<int> arr;
		for(int i =0;i<len;i++)
		{
			int x;
			arr.push_back(x);
			
		}
		
		int sum=0;
		for(int i=0;i<len;i++)
		{
			int count=0;
			for(int j=i;j<len;j++)
			{
				if(arr[i]==arr[j] && i!=j)
				{
				count++;
		        
			    }
			
			}
			arr.erase(i);
			
			count++;
			  
			if(count==k )
			sum+=arr[i];
			
			
		}
		if(sum!=0)
		cout << sum << endl;
		else
		cout << -1 << endl;
	}
	
}
