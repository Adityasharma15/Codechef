#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	long long int tc;
	cin >> tc;
	while(tc--)
	{
		long long int t , d , x , check = 0;
		cin >> t;
		
		long long int T[101] = {0};
		
		for(int i=0;i<t;i++)
		{
			    cin >> x;
				T[x]++;
    	}
	
		cin >> d;
		
		long long int D[101]={0};
		
		for(int i=0;i<d;i++)
		{
				cin >> x;
				D[x]++;
	    }
			
		long long int tq , dq;
		
		cin >> tq;
		
		for(int i =0 ; i<tq; i++)
		{
			cin >> x;
			
			if(T[x]==0)
			check = 1;
		}
		
		cin >> dq;
		
		for(int i=0; i<dq; i++)
		{
			cin >> x;
			
			if(D[x]==0)
			check = 1;
		}
		
		
		if(check==0)
        cout << "yes" << endl;
        
        else if(check==1)
        cout << "no" << endl;
	}
	
}
