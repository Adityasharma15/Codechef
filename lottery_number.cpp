#include<bits/stdc++.h>
using namespace std;
int main()
{
	int len, n;
	int temp, sum1=0, sum2=0;
	cin >> len >> n;
	for(int i=0;i<len;i++)
	{
		temp=n%10;
		n=n/10;
		if(temp!=4 && temp!=7)
		break;
		
		else
		{
		if((i+1)<=len/2)
		sum1+=temp;
		else
		sum2+=temp;	
		}
	}
	
	if(sum1==sum2 && sum1!=0)
	cout << "YES"<< endl;
	else
	cout << "NO" << endl;
}
