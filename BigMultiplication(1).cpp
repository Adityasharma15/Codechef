#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
	
	string m , n;
	cin >> m >> n;

	long long int len1 = m.length() , sum1=0;
	long long int len2 = n.length() , sum2 = 0;
	
	for(long long int i=0;i<len1;i++)
	{
		sum1+=(m[i]-48);
	}
	
	for(long long int i=0;i<len2;i++)
	{
		sum2+=(n[i]-48);
	}
	
	long long int remain1 = sum1 % 3  ,  remain2 ;
	
	remain2 = (remain1 * sum2 ) % 3 ;
	
	cout << remain2 << endl;
	
}
	
}
