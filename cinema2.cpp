#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,z;
		cin >> x;
		if(x==0)
		cout << 0 << endl;
		int time=0,temp,i=0;
		vector <int> v;
		v.push_back(1);
		while(1)
		{ 
	        temp = v[i]+i+2;	
			v.push_back(temp);
			if(temp > x)
			{break;}
			i++;
		}
		z=x;
		i=0;
		while(1)
		{
			z = z - v[i];
			time++;
			if(z-v[i+1] < 0)
			{
			if((v[i+1]-z) >= z)
		    break;
		    if((v[i+1]-z) < z)
		    {
		    	z = v[i+1] - z;
		    	time++;
		    	break;
			}
		    }
		i++;
		}
		if(z!=0)
		{
		time = time + (x-z);
	    }
		cout << time << endl;
     	}
}
