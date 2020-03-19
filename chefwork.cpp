#include<iostream>
using namespace std;
int main()
{
	int len;
	cin >> len;
	int p[len] , w[len], leasta = 100000 , leastt=100000, leastb=100000 ;
	for(int i=0;i<len;i++)
	{
		cin >> p[i];
	}
	for(int i=0;i<len;i++)
	{
		cin >> w[i];
		if(w[i]==1)
		{
			if(p[i]<leastt)
			leastt = p[i];
		}
		else if(w[i]==2)
		{
			if(p[i]<leasta)
			leasta = p[i];
		}
		else if(w[i]==3)
        {
        	if(p[i]<leastb)
        	leastb = p[i];
		}
	}
	
	if(leasta + leastt < leastb)
	cout << leasta+leastt << endl;
	else
	cout << leastb << endl;
}
