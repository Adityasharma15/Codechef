#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	int len, k;
	cin >> len >> k;
	vector<int> v;
	for(int i=0;i<len;i++)
	{
		int x;
		cin >> x;
        v.at(x-7)+=1;
	}
	
	int sum=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i-3]==k)
		sum+=i;
	}	
		
		cout << sum << endl;
		
	}
	
	
}
