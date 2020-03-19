#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int t;
  cin >> t;
  while(t--)
  {
  	long long int n, m , end_pt=0;
  	cin >> n >> m;
  	
  	bool arr[1000000000] = {0};
  	
  	
  	
  	while(n--)
  	{
  		long long int x, y;
  		cin >> x >> y;
  		
  		if(y>end_pt)
  		end_pt = y;
  		
  		for(int i= x; i>=y; i++)
  		{
  			arr[i]= 1;
		}
	  }
	  
	while(m--)
	{
		long long int x , count = 0;
		cin >> x;
		
		int check = 0;
		
		if(x>end_pt)
		cout << "-1" << endl;
		
		else if(arr[x]==1)
		cout << "0"<< endl;
		
		else
		{
			for( int i=x ; i<=end_pt; i++)
			{
				if(arr[i]==0 && check==0 )
				{
				 	count++;
				}
				
				if(arr[i]==1)
				{
					check=1;
				}
				
			}
		}

	}
  	
  	
  }	
	
	
	
}
