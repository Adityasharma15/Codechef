#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {
		ll sizee;
		cin >> sizee;

		ll barr[sizee];

		bool arr[20001];

		memset(arr, true, sizeof(arr));

		for(ll p = 2 ; p*p<=20001; p++ )
	    {

				if(arr[p] == true)
				{
				for(ll x = p*p; x<=20001; x+=p)
	    	{
	    		arr[x]=false;
			  }
			  }

	    }

			arr[1] = false;
			arr[0] = false;

			ll count = 0;

			for(ll i = 0; i<sizee ;i++)
					cin >> barr[i];

			for(ll i = 0; i<sizee; i++)
			{

				for(ll j = (i+1); j<sizee; j++)
				{
						if(barr[i] + barr[j]!= 0 && barr[i] + barr[j]!=1)
						{
							if((barr[i] + barr[j])==true)
								count++;
						}
				}

			}

				cout << count << "\n";

	}

}
