#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int len;
		cin >> len;
		
		int ar[len] , min = 1000  , check1 = 0 ;
		
		for(int i=0;i<len;i++)
		{
			int checkp = 0;
			cin >> ar[i];
			
			if(ar[i]==2)
			{
				min = 2;
			}
			
			if(ar[i] < min  && ar[i]!=1  && ar[i]%2!=0 )
			{
			
			for(int j=3 ; j<ar[i]/2 ; j=j+2)
			{
			if(ar[i]%j==0)
				checkp=1;
			}
			
			if(checkp!=1)
			min = ar[i]; 
					
			}
			
			if(ar[i]==1)
            {
            	check1 = 1;
			}
		}
		
		if(check1 == 0 || min==1000)
		{
		cout << "-1" << endl;
	   }
		
		if(check1==1 && min!=1000)
		cout << min << endl;
		
	}
	
	
}

