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

		bool arr[2000001];

		memset(arr, true, sizeof(arr));

		for(ll p = 2 ; p*p<=2000001; p++ )
	    {
        if(arr[p] == true)
        {
	    	for(ll x = p*p; x<=2000001; x+=p)
	    		arr[x]=false;
        }
	    }

			arr[1] = false;
			arr[0] = false;

			ll count = 0;

			std::vector<ll> evenn;
			std::vector<ll> odd;

			for(ll i = 0; i<sizee ;i++)
			{
					cin >> barr[i];

					if((barr[i]%2)==0)
					 	evenn.push_back(barr[i]);

					else
						odd.push_back(barr[i]);
			}

			for(ll i = 0; i<evenn.size(); i++)
			{

				for(ll j = 0; j<odd.size(); j++)
				{
						if((arr[evenn[i]+odd[j]])==true)
							count++;
				}

			}

				cout << count << "\n";

	}

}
