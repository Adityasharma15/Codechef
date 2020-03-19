#include<bits/stdc++.h>
using namespace std;

int main()
{
	 long int t;
	cin >> t;
	while(t--)
	{
		long long int len , min , sum=0;
		cin >> len >> min;
		
		long long int plate[len];
		
		for(int i=0;i<len;i++)
		{
			cin >> plate[i];
			sum+=plate[i];
		}
		
		if(sum<min)
		{
			cout << "-1" << endl;
		}
		
		if(sum==min)
		{
			cout << len << endl;
		}
		
		sort(plate, plate + len);
		
		long long int plates=0;

		if(sum>min){
			sum=0;
			for(long long i=len-1;i>=0;i--){
				sum=sum+plate[i];
				plates++;
				if(sum>=min){
					break;
				}
			}
		cout<<plates<<endl;
		}
		
	}
	
	
	
}
