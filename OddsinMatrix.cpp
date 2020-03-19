#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, m, q, odd = 0;
		
		cin >> n >> m >> q;
		
		unordered_set<int> oddrows;
		unordered_set<int> oddcols;
		
		while(q--)
		{
			ll x,y;
			cin >> x >> y;
			
			int oddflagx = 1, oddflagy = 1;


            if(oddrows.find(x) == oddrows.end())
            	oddflagx = 0;                    //EVEN OCCURENCES UP TILL NOW.	
            	
            if(oddcols.find(y) == oddcols.end())
            	oddflagy = 0;
			
			if(oddflagx == 0)   //0,2,4,6
				{																																					
				odd = odd +  m - (2*oddcols.size());   //(columns appeared odd number of times).		
				//  odd=odd-n;  // odd - n - 1;
          
				//UPDATING THE NUMBER OF OCCURENCE OF CURRENT ROW
				oddrows.insert(x);
			    }
			    
			else
			{
				odd = odd + (2*oddcols.size()) - m;  // Now row will become even but if col with already even they will become odd
  				oddrows.erase(x);
  			}    
					    
			if(oddflagy == 0)
			{
				odd = odd + n - (2*oddrows.size());
				oddcols.insert(y);
			}		    

			else
			{
				odd = odd + (2*oddrows.size()) - n;
				oddcols.erase(y);	
			} 				
		}

		cout << odd << endl;
	}
	
}
