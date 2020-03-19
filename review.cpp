#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

	ios_base::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);


	ll n, q;

	cin >> n >> q;

	ll arr[n];

	for(ll i = 0; i< n; i++)
	{
		cin >> arr[i];
	}

	while(q--)
	{
		ll l, r, inc = 0, dec = 0;
		cin >> l >> r;
        
        ll beg = 0;

		for(ll i = l-1; i < r; i++)
		{

			if((i-1) >= 0 && arr[i-1] < arr[i] && beg>=1)
			{
				beg++;
			}


			if((i-1) < 0 || arr[i-1] > arr[i])
			{
				beg = 1;
			}

			if((i+1) >= r || arr[i+1] < arr[i] )
			{
				if(beg>=2)
				{
					inc++;
					beg = 0;
				}
			}

		}

		beg = 0;

		for(ll i = l-1; i < r; i++)
		{

			if((i-1) >= 0 && arr[i-1]>arr[i] && beg>=1)
			{
				beg++;
			}


			if((i-1) < 0 || arr[i-1] < arr[i])
			{
				beg = 1;
			}

			if((i+1) >= r || arr[i+1] > arr[i] )
			{
				if(beg>=2)
				{
					dec++;
					beg = 0;
				}
			}

		}

		cout << "inc " << inc << "  dec " << dec << "\n";

		if(inc == dec)
			cout << "YES" << "\n";

		else
			cout << "NO" <<"\n";


	}

}