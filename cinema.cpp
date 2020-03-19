#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long int x , z;
		cin >> x;
		int time,temp,i=0;
		vector <int> v;
		
		v.push_back(0);
		while(1)
		{ 
	        temp = v[i]+i+1;	
			v.push_back(temp);
			if(v[i+1] > x)
			{break;}
			i++;
		}
		
	}
}
