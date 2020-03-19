#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll Xor(ll x, ll y) 
{ 
return (x | y) & (~x | ~y); 
} 

int main()
{
	ll int t;
	cin >> t;

	while(t--)
	{
		ll n, k;
		cin >> n >> k;

		ll arr[n];

		for(ll i =0;i<n;i++)
			cin >> arr[i];


		if( n%2!=0)
		{
		
		
			ll y = k/n;
			ll y1 = k%n;
		
		for(ll i = n-1; i>n/2; i--)
		{

			ll x = Xor(arr[i], arr[n-i-1]);

			ll a = arr[n-i-1], b = arr[i];

		
				if(y%3==0)
				{
					if(y1<=i)
					{	
								
						if(y1>(n-i-1))
							arr[n-i-1] = x;
					}

					else
					{
						arr[n-i-1] = x;
						arr[i] = a;
					}
				}

				else if(y%3==1)
				{

					if(y1<=i)
					{	
						if(y1==0)
						{
							arr[n-i-1] = x;
							arr[i] = a;	
						}
					
						else if(y1>n-i-1)
							{
								arr[n-i-1] = b;
								arr[i] = a;
							}
							
						else if(y1<=n-i-1)
						{
							arr[n-i-1] = x;
							arr[i] = a;
										
					 	}	
					}

					else
					{
						arr[n-i-1] = b;
						arr[i] = x;
					}	
            	}

            	else if(y%3==2)
            	{
            		if(y1<=i)
					{	
						if(y1==0)
						{
							arr[n-i-1] = b;
							arr[i] = x;	
						}
					
						else if(y1>n-i-1)
							{
								arr[n-i-1] = a;
								arr[i] = x;
							}
						else if(y1<=n-i-1)	
						{				
							arr[n-i-1] = b;
							arr[i] = x;	
						}	
					}

					else
					{

					}	

            	}	

				if((k-1) >= n/2)
            	arr[n/2]=0;

}
}
			

    else
	{
				    ll y = k/n;
					ll y1 = k%n;	
				
				for(ll i = n-1; i>=n/2; i--)
	        	{	

					ll x = Xor(arr[i], arr[n-i-1]);
							
					ll a = arr[n-i-1], b = arr[i];

					
				
				if(y%3==0)
				{
					
					if(y1<=i)
					{		
						if(y1>(n-i-1))
							arr[n-i-1] = x;
					}

					else
					{
						arr[n-i-1] = x;
						arr[i] = a;
					}
				}

				else if(y%3==1)
				{ 	
				    if(y1<=i)
					{	
						if(y1==0)
						{
							arr[n-i-1] = x;
							arr[i] = a;	
						}		
								
						
						else if(y1>n-i-1)
							{
								arr[n-i-1] = b;
								arr[i] = a;
							}
							
						else if(y1<=n-i-1)
						{
							arr[n-i-1] = x;
							arr[i] = a;
										
					 	}	
					    }
		
					else
							{
								arr[n-i-1] = b;
								arr[i] = x;
							}
						}
                    	

            	else if( y%3==2 )
            	{
            		if(y1<=i)
					{	
						if(y1==0)
						{
							arr[n-i-1] = b;
							arr[i] = x;	
						}
					
						
						else if(y1>n-i-1)
							{
								arr[n-i-1] = a;
								arr[i] = x;
							}
							
						else if(y1<=n-i-1)	
						{
		
							arr[n-i-1] = b;
							arr[i] = x;	
						}
					}

					else
					{
						
					}	

            	}	

                }	

		}
			
			if(n==1)
			cout << "0" << endl;
			
			else
			for(ll i=0;i<n;i++)
				cout << arr[i]<< " ";

			cout << endl;

	}	
}
