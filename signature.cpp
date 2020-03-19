#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n, m;
        cin >> n >> m;

        string x;

        ll A[110][110];
        ll B[110][110];
		
		memset(A,0,sizeof(A));
		memset(B,0,sizeof(B));
		
        for(ll i =0; i<n;i++)
        {
		    cin >> x;

            for(int j =0 ;j<m;j++)
            {   
                A[i][j]= x[j] - '0';
            }    
        }

        for(ll i = 0; i < n; i++)
        {
            cin >> x;

            for(ll j = 0; j<m ; j++)
                B[i][j] = x[j] - '0';
        }

        ll mismatch = 0, min =1000000;

        for(ll dr=-25; dr<=25; dr++)
        {
            for(ll dc=-25; dc<=25; dc++)
            {         
            	mismatch=0;
            	
                for(ll i=0;i<n; i++)
                {
                    for(ll j=0; j<m; j++)
                    {
                    	
                        if(A[i][j]!=B[i+dr][j+dc])
    					{  
						  mismatch++;
						}
                    }
                 } 

                if(mismatch<min)
                   {
			   		 min=mismatch;
				   }   
            }
        }
				   cout << min << "\n";
    }
}
